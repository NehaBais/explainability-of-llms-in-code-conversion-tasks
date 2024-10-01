def replace_string(original, find, replacement):
    index = original.find(find)
    if index < 0:
        # string not found
        print("Replacement failed.")
    else:
        # substring is [index : (index+len(find)) - we want to include the last character in the slice]
        replaced_str = original[:index] + replacement + original[index + len(find) :]
        return replaced_str
