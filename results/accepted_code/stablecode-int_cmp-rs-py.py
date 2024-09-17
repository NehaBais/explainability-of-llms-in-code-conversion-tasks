import sys

def main():
    try:
        a = int(input("Enter first integer: ")))
        b = int(input("Enter second integer: ")))
    except ValueError:
        print("Invalid input. Please enter integers only.")
        sys.exit(1)

    if a < b:
        print(f"{a} is less than {b}")
    elif a == b:
        print(f"{a} equals {b}")
    else:
        print(f"{a} is greater than {b}")

if __name__ == "__main__":
    main()