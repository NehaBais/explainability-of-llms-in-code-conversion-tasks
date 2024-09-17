a, b = map(int, input("Enter two integers: ").split())

if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} equals {b}")
else:
    print(f"{a} is greater than {b}")
