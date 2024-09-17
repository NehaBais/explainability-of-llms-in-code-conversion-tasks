 Here's how you can write the same program in Python:

```python
def compare_numbers():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    if a < b:
        print(f"{a} is less than {b}")
    
    if a == b:
        print(f"{a} is equal to {b}")
        
    if a > b:
        print(f"{a} is greater than {b}")

compare_numbers()
```
In this Python code, the function `compare_numbers` takes user input for two integers and compares them according to your conditions. The function uses a simple conditional statement to determine which message to display based on the comparison operators `<`, `=`, and `>`.
