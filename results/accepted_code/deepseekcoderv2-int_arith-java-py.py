def main():
    # Get two integers from the user
    a = int(input())
    b = int(input())

    sum_result = a + b  # The result of adding 'a' and 'b'
    difference = a - b  # The result of subtracting 'b' from 'a'
    product = a * b  # The result of multiplying 'a' and 'b'
    division = a // b  # The result of dividing 'a' by 'b', truncates towards zero
    remainder = (
        a % b
    )  # The remainder of dividing 'a' by 'b', same sign as the first operand

    print(f"a + b = {sum_result}")
    print(f"a - b = {difference}")
    print(f"a * b = {product}")
    print(f"quotient of a / b = {division}")  # truncates towards zero
    print(f"remainder of a / b = {remainder}")  # same sign as the first operand


if __name__ == "__main__":
    main()
