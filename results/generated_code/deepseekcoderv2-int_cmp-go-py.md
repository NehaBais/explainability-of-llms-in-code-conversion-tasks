 Sure! Below is the equivalent Python code for the provided Golang code:

```python
def main():
    try:
        # Get two integers from the user
        n1 = int(input("Enter number: "))
        n2 = int(input("Enter number: "))
        
        # Display a message based on the comparison of the two integers
        if n1 < n2:
            print(f"{n1} less than {n2}")
        elif n1 == n2:
            print(f"{n1} equal to {n2}")
        else:
            print(f"{n1} greater than {n2}")
    except ValueError as e:
        print("Invalid input:", str(e))

if __name__ == "__main__":
    main()
```

This Python code does the following:
1. Prompts the user to enter two integers.
2. Compares the two integers using `if` and `elif` statements to determine if one is less than, equal to, or greater than the other.
3. Prints a message based on the result of the comparison.
