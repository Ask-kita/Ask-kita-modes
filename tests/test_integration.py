import unittest
from scripts import Controller
import time
from utils import Screen


class TestIntegration(unittest.TestCase):
    def test_change_kita_state(self):
        controller = Controller()
        time.sleep(1)
        controller.mode, controller.language = controller._set_mode_and_language()
        controller._change_kita_state()
        self.assertTrue(controller.ask_kita_is_started)
        time.sleep(3)
        controller._change_kita_state()
        self.assertTrue(controller.ask_kita_is_paused)
        time.sleep(1)
        controller._change_kita_state()
        time.sleep(3)
        self.assertFalse(controller.ask_kita_is_paused)

    def test_goto_transcription_screen(self):
        controller = Controller()
        controller._goto_start()
        self.assertEqual(controller.widget.currentIndex(), Screen.TRANSCRIPTION)

    def test_goto_settings_screen(self):
        controller = Controller()
        controller._goto_settings()
        self.assertEqual(controller.widget.currentIndex(), Screen.SETTINGS)

    def test_goto_command_screen(self):
        controller = Controller()
        controller._goto_command()
        self.assertEqual(controller.widget.currentIndex(), Screen.COMMAND)

    def test_goto_home_screen(self):
        controller = Controller()
        controller._goto_start()
        time.sleep(1)
        self.assertEqual(controller.widget.currentIndex(), Screen.TRANSCRIPTION)
        controller._change_kita_state()
        time.sleep(3)
        self.assertTrue(controller.ask_kita_is_started)
        controller._goto_home()
        self.assertEqual(controller.widget.currentIndex(), Screen.HOME)
        self.assertTrue(controller.ask_kita_is_paused)

    def test_goto_home_screen(self):
        controller = Controller()
        controller._goto_start()
        time.sleep(1)
        controller._change_kita_state()
        self.assertTrue(controller.ask_kita_is_started)
        controller._goto_home()
        self.assertEqual(controller.widget.currentIndex(), Screen.HOME)
        self.assertTrue(controller.ask_kita_is_paused)

    def test_set_mode_and_language(self):
        controller = Controller()
        controller.settings.mode_dropdown.setCurrentIndex(1)
        controller.settings.lang_dropdown.setCurrentIndex(1)
        mode, lang = controller._set_mode_and_language()
        self.assertEqual(mode, "Transcription")
        self.assertEqual(lang, "French")

    def test_command_mode(self):
        controller = Controller()
        controller.settings.mode_dropdown.setCurrentIndex(1)
        controller._goto_start()
        self.assertEqual(controller.widget.currentIndex(), Screen.COMMAND)
        time.sleep(1)
        controller._change_kita_state()
        time.sleep(3)
        self.assertTrue(controller.ask_kita_is_started)
        controller.kita.end()

    def test_not_implemented_mode(self):
        controller = Controller()
        controller.settings.mode_dropdown.addItem("Not implemented")
        controller.settings.mode_dropdown.setCurrentIndex(2)
        with self.assertRaises(NotImplementedError):
            controller._goto_start()

if __name__ == '__main__':
    unittest.main()
