class Solution:
    def factorial(self, num):
        if num == 0 or num == 1:
            return 1
        else:
            return num * s.factorial(num-1)  # 5 * 4!


if __name__ == '__main__':
    number = int(input("Enter number : "))
    s = Solution()
    s.factorial(number)
    print(f"The factorial of {number} is { s.factorial(number)}")