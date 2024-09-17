Here is how you can convert it to Python. In Python, we use `input()` function for taking input from user. We need to wrap the code inside a while loop so that it continues asking for inputs until valid integers are provided by the users. Also in Python, type coercion doesn't happen implicitly like JavaScript does.

```python
# Function compare is written with standard comparison operators
def compare(a, b): 
    if a == b: 
        print(f"{a} equals {b}")
    if a < b: 
        print(f"{a} is less than {b}")
    if a > b:  
        print(f"{a} is greater than {b}")

# Function compare_with_type_check is written with type check before comparison
def compare_with_type_check(a, b): 
    if type(a) == type(b): 
        compare(a, b)
    else: 
        print(f"{a} ({type(a).__name__}) and {b} ({type(b).__name__}) are not of the same type and cannot be compared.")
        
# Main program    
while True:
    try:
        a = int(input("Please enter first integer: ")) 
        b = int(input("Please enter second integer: ")) 
        compare_with_type_check(a, b) # Calling function with type check
    except ValueError:
        print('Invalid input! Please provide valid integers.')
```    
In the above code, if the user inputs a non-integer value, Python raises `ValueError` and the exception is handled by printing 'Invalid input! Please provide valid integers.'. This continues until a valid integer pair is provided.

