import unittest
from scripts import Parser
import tempfile
import os

class TestParser(unittest.TestCase):

    def setUp(self) -> None:
        self.parser = Parser()

    def test_basic_tokenise(self):
        line_to_tokenise = "It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout."
        expected_output = ["It", "is", "a", "long", "established",
                           "fact", "that", "a", "reader", "will",
                           "be", "distracted", "by", "the", "readable",
                           "content", "of", "a", "page", "when", "looking",
                           "at", "its", "layout"]
        actual_output = self.parser._tokenise(line_to_tokenise)
        self.assertEqual(actual_output, expected_output, "not tokenised properly")

    def test_punct_removal_tokenise(self):
        line_to_tokenise = "It's not, \"great\" make-up."
        expected_output = ["Its", "not", "great", "makeup"]
        actual_output = self.parser._tokenise(line_to_tokenise)
        self.assertEqual(actual_output, expected_output, "all punctuation should be removed during tokenisation")

    def test_list_to_string(self):
        vocab = ["this", "is", "a", "test", "about", "conversion", "to", "string"]
        expected_output = '["this","is","a","test","about","conversion","to","string"]'
        actual_output = self.parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output, "string should be in the correct format")

    def test_list_to_string_lower_case(self):
        vocab = ["tHis", "is", "a", "test", "About", "CONVERSION", "to", "string", "LOWErCase"]
        expected_output = '["this","is","a","test","about","conversion","to","string","lowercase"]'
        actual_output = self.parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output, "output should be lowercased")

    def test_list_to_string_numbers_to_words(self):
        vocab = ["Numbers", "1", "150", "923412", "should", "be", "words"]
        expected_output = '["numbers","one","one hundred fifty","nine ' \
                          'hundred twenty three thousand four hundred twelve",' \
                          '"should","be","words"]'
        actual_output = self.parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output, "numbers should be written in words")

    def test_load_custom_vocab(self):
        file_contents = 'Hello world!, This is a 1 temporary File.\n number 5 won\'t be seen as an ACTUAL number'
        expected_output = '["temporary","world","file","five","seen","an","actual","a","one","number","hello","is","wont","as","be","this"]'
        self._helper_test_load_custom_vocab(file_contents, expected_output)

    def test_load_custom_vocab_repeated_words(self):
        file_contents = 'words words ... repeated repeated and again and again'
        expected_output = '["words","repeated","and","again"]'
        self._helper_test_load_custom_vocab(file_contents, expected_output)

    def test_load_custom_vocab_file_not_found(self):
        path = 'file_not_found'
        with self.assertRaises(FileNotFoundError):
            parser = Parser()
            parser.load_custom_vocab(path)


    def _helper_test_load_custom_vocab(self, file_contents, expected_output):
        path = self._create_temp_file(file_contents)
        actual_output = self.parser.load_custom_vocab(path)
        print(">" * 100, actual_output)
        os.unlink(path)
        assert not os.path.exists(path)
        self.assertEqual(sorted(actual_output), sorted(expected_output), "vocab should be loaded properly")
        self.assertEqual(len(actual_output), len(expected_output), "vocab should be loaded properly")

    def _create_temp_file(self, str):
        fp = tempfile.NamedTemporaryFile(mode='w', delete=False)
        path = fp.name
        fp.write(str)
        fp.close()
        return path


if __name__ == '__main__':
    unittest.main()
