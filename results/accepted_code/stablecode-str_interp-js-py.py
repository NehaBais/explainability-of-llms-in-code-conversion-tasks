original = "Mary had a X lamb"
little = "little"
# Note the use of f-string for string interpolation
replaced = f"{original.replace('X', little)}"
print(replaced)
