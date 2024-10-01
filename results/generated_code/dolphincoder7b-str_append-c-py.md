Sure, here's the equivalent Python code:
```python
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
```
When you run this code, it will output:

Initial value: Good Morning
Updated value: Good Morning to all !!!

This is how Python implements string concatenation with the '+' operator. However, please note that the second method of appending text in C can't be directly translated into a Python code because it requires pointers which are not available in Python (due to the nature of memory management and objects). Therefore, we only included the 1st method using `strcat` function.
Please let me know if you need any further assistance!
