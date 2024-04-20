class Solution:
    def reverseWords(self, s: str) -> str:
        n = len(s)
        word = []
        reverse_n = []
        for i in range(1,n+1):
            if s[-i] != " ":
                word.append(s[-i])
            else:
                if word:
                    word.reverse()
                    reverse_n.append(''.join(word))
                    word = [] 
        if word:
            word.reverse()
            reverse_n.append(''.join(word))
        return (' '.join(reverse_n))
