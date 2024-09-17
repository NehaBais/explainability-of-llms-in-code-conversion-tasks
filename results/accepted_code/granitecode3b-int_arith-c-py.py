import sys

if len(sys.argv) < 3:
    print("Usage: python program_name.py num1 num2")
    exit()
num1 = int(sys.argv[1])
num2 = int(sys.argv[2])
print(f"Sum: {num1 + num2}")
print(f"Difference: {num1 - num2}")
print(f"Product: {num1 * num2}")
print(f"Integer Quotient: {num1 // num2}")
print(f"Remainder: {num1 % num2}")
