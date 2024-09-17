a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
print("Sum:", a + b)
print("Difference:", a - b)
print("Product:", a * b)
try:
    q = a / b
    print("Integer quotient:", q, "remainder", a % b)
except ZeroDivisionError:
    print("Cannot divide by zero")
