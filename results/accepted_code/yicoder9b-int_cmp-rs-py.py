num1 = int(input("Enter first number : "))
num2 = int(input("Enter second number : "))

if num1 < num2:
    print(str(num1) + " is less than " + str(num2))
elif num1 == num2:
    print(str(num1) + " equals " + str(num2))
else:  # num1 > num2
    print(str(num1) + " is greater than " + str(num2))
