def sconcat(s1, s2):
    return s1 + s2


# Create a string variable equal to any text value.
s = "hello"

# Print the content of the variables
print(f"{s} literal")
# Alternatively, using concatenation
print(f"{s}{' literal'}")

# Concatenate another string literal with the original variable and print it
s2 = sconcat(s, " literal")
print(s2)
