original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "big"
newString = original.replace(original.find(toBeReplaced)), len(toBeReplaced), replacement)
print("String after replacement:", newString)