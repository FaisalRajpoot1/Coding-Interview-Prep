class Solution:
    def removeKdigits(self, numString: str, kValue: int) -> str:
        if kValue == len(numString):
            return "0"
        stack = []
        for i in range(len(numString)):
            while stack and stack[-1] > numString[i] and kValue > 0:
                stack.pop()
                kValue -= 1
            stack.append(numString[i])

        stack = stack[:len(stack) - kValue]
        return "".join(stack).lstrip("0") or "0"
