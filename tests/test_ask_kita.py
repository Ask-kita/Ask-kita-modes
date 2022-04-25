import unittest
from scripts import ask_kita
import time
from utils import create_temp_file


class TestAskKita(unittest.TestCase):
    def setUp(self) -> None:
        self.kita = ask_kita.Ask_KITA()
        self.kita.start()

    def tearDown(self) -> None:
        self.kita.end()

    def test_end(self):
        self.kita.end()
        time.sleep(1)
        self.assertFalse(self.kita.is_alive())

    def test_pause(self):
        self.kita.pause()
        time.sleep(0.5)
        self.assertTrue(self.kita.paused)
        self.kita.resume()
        time.sleep(0.5)
        self.assertFalse(self.kita.paused)

    def test_resume(self):
        self.kita.resume()
        self.assertFalse(self.kita.paused)

    def test_update_vocab(self):
        file_contents = 'Hello world!, This is a 1 temporary File.\n number 5 won\'t be seen as an ACTUAL number'
        path = create_temp_file(file_contents)
        self.kita.update_vocab(path)
        self.assertTrue(self.kita.corpus_uploaded)

    def test_update_vocab_corpus_not_uploaded(self):
        path = "not a path"
        self.kita.update_vocab(path)
        self.assertFalse(self.kita.corpus_uploaded)

    def test_act_transcription(self):
        d = {'not_text': 'hello world'}
        self.kita._act(d)

    def test_act_command(self):
        d = {'text': 'Not a command'}
        self.kita.mode = 'Command'
        self.kita._act(d)

    def test_act_not_a_mode(self):
        d = {'text': 'hello world'}
        with self.assertRaises(NotImplementedError):
            self.kita.mode = 'not a mode'
            self.kita._act(d)
