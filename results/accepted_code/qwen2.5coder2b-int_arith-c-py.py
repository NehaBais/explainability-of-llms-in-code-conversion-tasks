# Python code to get two integers from the user, display their sum, difference, product,
# integer quotient, remainder and exponentiation if it exists.
def main():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    # Display results
    print(f"a + b = {a+b}")
    print(f"a - b = {a-b}")
    print(f"a * b = {a*b}")
    print(f"a / b = {a/b} (truncated towards 0)")
    print(f"a % b = {a%b} (same sign as first operand)")


if __name__ == "__main__":
    main()
