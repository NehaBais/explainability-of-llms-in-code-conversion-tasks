def check_string(str1, str2):
    if str1.startswith(str2):
        print("The first string starts with the second string")
    elif str2 in str1:
        print(
            f"The first string contains the second string at position/s {[i for i in range(len(str1)) if str1.startswith(str2, i)]}"
        )
    if str1.endswith(str2):
        print("The first string ends with the second string")


check_string("abcd", "ab")  # returns "The first string starts with the second string"
check_string(
    "abcd", "zn"
)  # returns "The first string does not end with the second string"
check_string(
    "abab", "bb"
)  # returns "The first string contains the second string at position/s [2, 3]"
