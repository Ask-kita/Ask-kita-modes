import unittest
from scripts import Parser


class TestParser(unittest.TestCase):

    def test_basic_tokenise(self):
        parser = Parser()
        line_to_tokenise = "It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout."
        expected_output = ["It", "is", "a", "long", "established",
                           "fact", "that", "a", "reader", "will",
                           "be", "distracted", "by", "the", "readable",
                           "content", "of", "a", "page", "when", "looking",
                           "at", "its", "layout"]
        actual_output = parser._tokenise(line_to_tokenise)
        self.assertEqual(actual_output, expected_output)

    def test_punct_removal_tokenise(self):
        parser = Parser()
        line_to_tokenise = "It's not, \"great\" make-up."
        expected_output = ["Its", "not", "great", "makeup"]
        actual_output = parser._tokenise(line_to_tokenise)
        self.assertEqual(actual_output, expected_output)

    def test_list_to_string(self):
        parser = Parser()
        vocab = ["this", "is", "a", "test", "about", "conversion", "to", "string"]
        expected_output = '["this","is","a","test","about","conversion","to","string"]'
        actual_output = parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output)

    def test_list_to_string_lower_case(self):
        parser = Parser()
        vocab = ["tHis", "is", "a", "test", "About", "CONVERSION", "to", "string", "LOWErCase"]
        expected_output = '["this","is","a","test","about","conversion","to","string","lowercase"]'
        actual_output = parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output)

    def test_list_to_string_numbers_to_words(self):
        parser = Parser()
        vocab = ["Numbers", "1", "150", "923412", "should", "be", "words"]
        expected_output = '["numbers","one","one hundred fifty","nine ' \
                          'hundred twenty three thousand four hundred twelve",' \
                          '"should","be","words"]'
        actual_output = parser._list_to_string(vocab)
        self.assertEqual(actual_output, expected_output)


if __name__ == '__main__':
    unittest.main()
