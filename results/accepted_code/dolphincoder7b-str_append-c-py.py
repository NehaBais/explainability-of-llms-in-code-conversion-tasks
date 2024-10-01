# Include necessary libraries
import sys
import os


def append_text(text):
    # Append text to a string
    result = text + " to all" + " !!!"

    return result


def main():
    # Example usage of the function
    str1 = "Good Morning"

    # Print initial value of str1
    print("Initial value:", str1)

    # Call the append_text function and store the result in a variable
    updated_str = append_text(str1)

    # Print the updated string
    print("Updated value:", updated_str)


# Run the main function to test
if __name__ == "__main__":
    main()
