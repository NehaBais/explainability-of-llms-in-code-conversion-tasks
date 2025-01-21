The equivalent Python code for the above Go code would be:

```python
def main():
    try:
        num1 = int(input("Enter number: "))
        num2 = int(input("Enter number: "))
        
        if num1 < num2:
            print(f"{num1} is less than {num2}")
        elif num1 == num2:
            print(f"{num1} is equal to {num2}")
        else:
            print(f"{num1} is greater than {num2}")
    except ValueError as e:
        print("Invalid input. Please enter a number.")

if __name__ == "__main__":
    main()
```

This Python code does the same thing - it first prompts for two integers from the user, then checks and prints out whether one integer is less than, equal to, or greater than the other. It includes error handling in case of invalid input by catching `ValueError` when an input that cannot be converted to an integer is given.
