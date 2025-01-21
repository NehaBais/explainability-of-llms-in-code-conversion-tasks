import sys
from math import pow

def main():
    # get two integers from command line arguments
    a = int(sys.argv[1]))
    b = int(sys.argv[2]))

    print("sum: ", a + b)
    print("difference: ", a - b)
    print("product: ", a * b)
    print("integer quotient (towards zero)): ", a // b)  # floor division, rounds towards negative infinity
    print("remainder: ", a % b)  # modulus operation, sign of remainder matches the sign of first operand
    print("exponentiation: ", pow(a, b)))  # pow function from math module for exponentiation

if __name__ == '__main__':
    main()