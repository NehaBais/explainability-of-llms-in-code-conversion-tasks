"""

def main():
    print("Enter two integers: ")
    a, b = map(int, input().split())
    print(f"{a} + {b} = {a+b}")
    print(f"{a} - {b} = {a-b}")
    print(f"{a} * {b} = {a*b}")
    print(f"{a} / {b} = {a//b} (truncated towards 0)")  # truncated towards 0
    print(f"{a} % {b} = {a%b} (same sign as first operand)")  # same sign as first operand
    # no exponentiation operator

if __name__ == "__main__":
    main()

