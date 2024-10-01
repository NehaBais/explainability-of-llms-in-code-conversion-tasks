from functools import reduce

my_strings = ["prepended to", "my string"]
prepended = reduce(lambda a, b: a + b, my_strings)
print(prepended)
