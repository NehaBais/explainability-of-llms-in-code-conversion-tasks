import sys

# Get two integers from the user (command line arguments)
a = int(sys.argv[1])
b = int(sys.argv[2])

# Perform operations and display results
sum_result = a + b
difference = a - b
product = a * b
division = a / b  # This will perform floating-point division
remainder = a % b  # This produces the remainder after dividing 'b' into 'a'
quotient = divmod(a, b)  # Returns both quotient and remainder as a tuple
exponentiation = a**b  # Perform exponentiation if needed

# Display results
print(f"a + b = {sum_result}")
print(f"a - b = {difference}")
print(f"a * b = {product}")
print(
    f"a / b (quotient) = {int(division)}"
)  # For integer quotient, use int() to truncate towards zero
print(f"a % b (remainder) = {remainder}")
if (
    sys.version_info[0] >= 3 and sys.version_info[1] >= 6
):  # Check Python version for f-string formatting
    print(f"a ** b (exponentiation) = {exponentiation}")
