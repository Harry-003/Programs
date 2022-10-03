'''
Demonstrate the Following Custom Exception.
If the provided Age is greater than 150 in that caseraise an exception thatdisplays a proper message -- ' More than 150 is notallowed !!!! ’

'''
class AgeException(Exception):
    pass

age = int(input("Enter your age : "))
try:
    if age > 150:
        raise AgeException("More than 150 is not allowed !!!!")
except AgeException as agex:
    print(f"Error message is : {agex}")
else:
    if age >= 18:
        print("You are allowed to vote")
    else:
        print("You are not allowed to vote")
    