from functools import reduce


def concatenate_strings(my_strings):
    return reduce(lambda x, y: x + y, my_strings)


# Example usage:
prepended = concatenate_strings(["prepended to", "my string"])
print(prepended)  # Output: prependedtomystring
