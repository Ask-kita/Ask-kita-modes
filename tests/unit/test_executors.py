import unittest
from scripts import TranscriptionExecutor, CommandExecutor, Executor
import time

class NoExecutorImplementation(Executor):
    pass

class TestExecutors(unittest.TestCase):

    def test_trnascription_execution(self):
        transcriptor = TranscriptionExecutor()
        dict = {"not_text" : "hello world"}
        transcriptor.execute(dict)

    def test_command_execution(self):
        command_executor = CommandExecutor()
        dict = {"not_text" : "NOT A COMMAND"}
        time.sleep(1)
        command_executor.execute(dict)

    def test_load_custom_vocab_file_not_found(self):
        no_executor_implementation = NoExecutorImplementation()
        with self.assertRaises(NotImplementedError):
            dict = {"not_text": "no execute"}
            no_executor_implementation.execute(dict)



if __name__ == '__main__':
    unittest.main()
