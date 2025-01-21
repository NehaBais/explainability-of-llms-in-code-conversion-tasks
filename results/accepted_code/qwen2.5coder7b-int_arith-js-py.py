# Get two integers from the user, and then (for those two integers), display their:
# - sum
# - difference
# - product
# - integer quotient
# - remainder
# - exponentiation

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

sum = a + b
difference = a - b
product = a * b
division = a / b
remainder = (
    a % b
)  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

print("a + b = {}".format(sum))
print("a - b = {}".format(difference))
print("a * b = {}".format(product))
print("a / b = {}".format(division))
print("a % b = {}".format(remainder))
