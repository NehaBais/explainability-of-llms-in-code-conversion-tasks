import sys

print("Enter two integers:")
a = int(input())
b = int(input())

if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} equals {b}")
else:
    print(f"{a} is greater than {b}")
