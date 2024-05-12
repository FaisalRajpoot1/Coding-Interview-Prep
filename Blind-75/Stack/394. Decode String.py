class Solution:
    def decodeString(self, s: str) -> str:
        stack = []
        for char in s:
            if char == ']':
                temp = ''
                while stack and stack[-1] != '[':
                    temp = stack.pop() + temp
                if stack:
                    stack.pop()
                number = ''
                while stack and stack[-1].isdigit():
                    number = stack.pop() + number
                digit_n = int(number)
                stack.append(temp * digit_n)
            else:
                stack.append(char)
        return ''.join(stack)
