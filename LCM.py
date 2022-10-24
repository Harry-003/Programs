class Solution:
    def getHCF(self, number1, number2):
        while number1 != number2:
            if number1 > number2:
                number1 = number1 - number2
            else:
                number2 = number2 - number1
        return number1


if __name__ == '__main__':
    num1 = int(input("Enter num1 : "))
    num2 = int(input("Enter num2 : "))

    # Calculating HCF here
    s = Solution()
    hcf = s.getHCF(num1, num2)

    # LCM formula
    lcm = (num1*num2)//hcf

    print(f"LCM of {num1} and {num2} is {lcm}")