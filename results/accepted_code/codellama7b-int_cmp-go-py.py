# Python code
print("Enter first number: ")
num1 = int(input())
print("Enter second number: ")
num2 = int(input())
if num1 < num2:
    print(f"{num1} is less than {num2}")
elif num1 == num2:
    print(f"{num1} is equal to {num2}")
else:
    print(f"{num1} is greater than {num2}")
