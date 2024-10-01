def string_conversion():
    import re

    # Testing if the first string starts with second string
    def check_string_start(str1, str2):
        if str1.startswith(str2):
            return True
        else:
            return False

    # Testing if the first string contains the second string at any location
    def check_string_contain(str1, str2):
        if str2 in str1:
            return True
        else:
            return False

    # Determining if the first string ends with the second string
    def check_string_end(str1, str2):
        if str1.endswith(str2):
            return True
        else:
            return False

    # Testing Index of occurrences of a string
    def find_substring(main_str, sub_str):
        loc = main_str.find(sub_str)
        return loc if loc != -1 else None

    print("Starts with:", check_string_start("abcd", "ab"))  # Expected: True
    print("Ends with:", check_string_end("abcd", "cd"))  # Expected: True
    print("Contains:", check_string_contain("abcd", "bc"))  # Expected: False
    print("Contains:", check_string_contain("abab", "ab"))  # Expected: True
    print(find_substring("abab", "bb"))  # Expected: 2
    print(find_substring("abab", "ab"))  # Expected: 0
