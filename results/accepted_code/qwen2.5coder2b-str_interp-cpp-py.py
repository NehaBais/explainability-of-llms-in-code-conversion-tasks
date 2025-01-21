def replace_value_in_string(original, to_be_replaced, replacement):
    original = original.replace(to_be_replaced, replacement)
    return original


original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"

print(replace_value_in_string(original, toBeReplaced, replacement))
