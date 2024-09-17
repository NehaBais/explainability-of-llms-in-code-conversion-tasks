a = 105
b = 91
print("{:0>8b}".format(a))
print("{:0>8b}".format(b))
print("{:0>8b}".format(a | b))
print("{:0>8b}".format(a & b))
print("{:0>8b}".format(a ^ b))
print("{:0>8b}".format(~a & 0xFF))  # Bitwise NOT with mask to get a u8.
print("{:0>8b}".format(a << 3))
print("{:0>8b}".format(a >> 3))
