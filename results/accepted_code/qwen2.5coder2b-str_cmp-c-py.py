def compare_strings(str1, str2):
    # This function compares two strings and prints the comparison results.
    print(
        f"{str1} {str1 == str2} {str1 != str2} {str1 > str2} {str1 < str2} {str1 >= str2} {str1 <= str2}"
    )


def compare_strings_ignore_case(str1, str2):
    # This function compares two strings in a case-insensitive manner and prints the comparison results.
    print(
        f"{str1} {str1.lower() == str2.lower()} {str1.lower() != str2.lower()} {str1.lower() > str2.lower()} {str1.lower() < str2.lower()} {str1.lower() >= str2.lower()} {str1.lower() <= str2.lower()}"
    )


# Main function
def main():
    print("	eq , ne , gt , lt , ge , le")
    # Iterating through command-line arguments, excluding the program name itself.
    for arg in range(1, len(sys.argv), 2):
        # Extracting two strings from each argument pair.
        str1 = sys.argv[arg]
        str2 = sys.argv[arg + 1]
        compare_strings(str1, str2)
        compare_strings_ignore_case(str1, str2)


# Importing the sys module to access command-line arguments.
import sys

if __name__ == "__main__":
    main()
