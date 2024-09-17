Here's the Python equivalent of your Rust code:

Python Code:
```python
def get_input():
    nums = []
    for i in range(2):
        nums.append(int(input("Enter integer {}: ".format(i+1))))
    return nums

def main():
    a, b = get_input()
    if a < b:
        print("{} is less than {}".format(a, b))
    elif a == b:
        print("{} equals {}".format(a, b))
    else:
        print("{} is greater than {}".format(a, b))
        
if __name__ == "__main__":
    main()
```
In this Python code, we first get the two integers from the user using a function `get_input()`. The condition checks if 'a' is less than 'b', equal to or greater than 'b' and prints the corresponding message. We use `elif` instead of nested `if` statements as it makes the code cleaner and more readable.

