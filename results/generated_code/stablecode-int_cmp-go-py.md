Here is the equivalent Python code for your GoLang code snippet. 

```python
def main():
    try:
        n1 = int(input('Enter number: ')))
        n2 = int(input('Enter number: '))))
        if n1 < n2:
            print(f'{n1} less than {n2}')
        elif n1 == n2:
            print(f'{n1} equal to {n2}')
        else:
            print(f'{n1} greater than {n2}')
    except ValueError:
        print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()
```

In this Python code, we are getting two integers from the user using `input()` function and converting them into integer type using `int()` function. 

We then use a `try...except` block to catch any `ValueError` exceptions that might occur if the user enters something other than an integer value.

Finally, we perform the comparison operations as per your GoLang code snippet to determine whether the first number is less than, equal to, or greater than the second number. We use Python's f-string formatting to construct the output messages in a more readable and maintainable way compared to using the `%` operator for string formatting.
