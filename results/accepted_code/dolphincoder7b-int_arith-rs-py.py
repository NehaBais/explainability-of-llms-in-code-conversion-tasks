def main():
    a = int(input("Please enter the first number:"))
    b = int(input("Please enter the second number:"))

    print("sum:", a + b)
    print("difference:", a - b)
    print("product:", a * b)
    print("integer quotient:", a // b)  # truncates towards zero
    print("remainder:", a % b)  # same sign as first operand
