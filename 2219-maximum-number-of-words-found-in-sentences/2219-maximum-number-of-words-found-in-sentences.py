class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxWord=0
        for i in sentences:
            word=1
            for j in i:
                if j == ' ':
                    word += 1
            if word > maxWord:
                maxWord = word
        return maxWord