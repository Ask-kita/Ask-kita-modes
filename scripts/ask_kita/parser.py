import n2w
import string
from nltk import word_tokenize


class Parser:

    def load_custom_vocab(self, file_path):
        vocab = set()
        with open(file_path, encoding="utf8") as file:
            for i, line in enumerate(file):
                temp = self._tokenise(line)
                vocab.update(temp)
        return self._list_to_string(vocab)

    def _tokenise(self, line):
        words = "".join([char for char in line if char not in string.punctuation])
        words = word_tokenize(words)
        return words

    def _list_to_string(self, vocab):
        result = "["
        for i, element in enumerate(vocab):
            if element.isnumeric():
                element = n2w.convert(element)
            result += f'"{element.lower()}"'
            result += ',' if i < len(vocab) - 1 else ''
        result += "]"
        return result