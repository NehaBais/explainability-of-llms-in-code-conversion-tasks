# defining the original string and character to be replaced
original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"

# replacing 'X' with 'little' in the original string
newString = original.replace(toBeReplaced, replacement)
print("String after replacement: " + newString)
