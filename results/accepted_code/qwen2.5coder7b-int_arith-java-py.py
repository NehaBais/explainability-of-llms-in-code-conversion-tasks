# Get two numbers from user input
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

sum_val = a + b  # The result of adding 'a' and 'b'
diff = a - b  # The result of subtracting 'b' from 'a'
prod = a * b  # The result of multiplying 'a' and 'b'
quotient = a // b  # The result of dividing 'a' by 'b', rounded towards zero
remainder = a % b  # The remainder of dividing 'a' by 'b'

print("a + b = ", sum_val)
print("a - b = ", diff)
print("a * b = ", prod)
print("quotient of a / b (rounded towards 0) = ", quotient)
print("remainder of a / b = ", remainder)

# Exponentiation is done with '**'
power = a**b
print("a ^ b = ", power)
