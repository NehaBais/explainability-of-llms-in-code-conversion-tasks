This code converts to Python as follows:
```python
import sys

def main():
    lines = [int(line.strip()) for line in sys.stdin.readlines()[:2]]
    a, b = lines[0], lines[1]
    
    if a < b:
        print("{} is less than {}".format(a, b))
    elif a == b:
        print("{} equals {}".format(a, b))
    else:
        print("{} is greater than {}".format(a, b))

sys.stdin = open('input.txt', 'r')  # replace with your file path
main()
```
Note that the `lines` variable uses list comprehension to convert each line of input into an integer and slice it to take only two lines. The `a` and `b` variables are assigned directly from this `lines` array since it is guaranteed to contain at least 2 elements based on the `take(2)` function call. The comparison operators used in Python are `<`, `==`, and `>` respectively for less than, equality check, and greater than.
