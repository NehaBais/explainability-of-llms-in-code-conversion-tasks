def string_interpolation(original_str, replacement):
    modified_str = original_str % replacement
    print(modified_str)


extra = "little"
string_interpolation("Mary had a %s lamb.", extra)
