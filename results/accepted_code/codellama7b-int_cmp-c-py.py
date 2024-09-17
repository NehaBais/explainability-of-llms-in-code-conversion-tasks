# Print two numbers and check which one is bigger or lower
print("Enter Two Numbers: ")
number1 = int(input())
number2 = int(input())
if number1 < number2:
    print("The first number entered is less than the second number")
elif number1 == number2:
    print("The first number entered is equal to the second number")
else:
    print("The first number entered is greater than the second number")
