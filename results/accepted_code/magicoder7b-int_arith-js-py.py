import sys

a = int(sys.argv[1])
b = int(sys.argv[2])

sum_ab = a + b
diff_ab = a - b
product_ab = a * b
division_ab = a / b
remainder_ab = (
    a % b
)  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

print("a + b =", sum_ab)  # The , syntax is a placeholder that is replaced by the sum
print("a - b =", diff_ab)
print("a * b =", product_ab)
print("a / b =", division_ab)
print("a % b =", remainder_ab)
