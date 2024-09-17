a = 10  # replace with your desired integer values
b = 5  # replace with your desired integer values
print("a & b:", a & b)
print("a | b:", a | b)
print("a ^ b:", a ^ b)
print("~a:", ~a)
print("a << n:", a << b)  # left shift
print("a >> n:", a >> b)  # arithmetic right shift
c = a & 0xFFFFFFFF  # convert to unsigned integer for logical shift
print("c >> b:", c >> b)  # logical right shift
# there are no rotation operators in Python, so we'll have to use bitwise operations instead
# left rotate: (a << b) | (a >> (32 - b))
d = (a << b) | (a >> (32 - b))
print("d:", d)
# right rotate: (a >> b) | (a << (32 - b))
e = (a >> b) | (a << (32 - b))
print("e:", e)
