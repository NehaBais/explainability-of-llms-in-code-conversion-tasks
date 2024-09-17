# Get the 2 numbers from command line arguments
a = int(input())
b = int(input())

sum = a + b  # The result of adding 'a' and 'b'
difference = a - b  # The result of subtracting 'b' from 'a'
product = a * b  # The result of multiplying 'a' and 'b'
quotient = (
    a // b
)  # The result of dividing 'a' by 'b' (Note: 'quotient' does not contain the fractional result)
remainder = a % b  # The remainder of dividing 'a' by 'b'
print("a + b = ", sum)
print("a - b = ", difference)
print("a * b = ", product)
print("quotient of a / b = ", quotient)  # towards zero
print("remainder of a / b = ", remainder)  # same sign as first operand
