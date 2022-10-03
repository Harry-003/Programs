'''
Demonstrate assert statement with examples(code).

'''
num1 = int(input("Enter number1 : "))
num2 = int(input("Enter number2 : "))

try:
    assert num2 > 0 ,"Number2 should be greater than 0" 
except AssertionError as ae:
    print(f"Error message is : {ae}")
else: 
    print(f"{num1} divided by {num2} is {num1/num2}")