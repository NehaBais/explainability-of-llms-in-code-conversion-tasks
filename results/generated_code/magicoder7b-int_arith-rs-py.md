 In Python, the code would look like this:

```python
import sys

a = int(sys.argv[1])
b = int(sys.argv[2])

print("sum:              ", a + b)
print("difference:       ", a - b)
print("product:          ", a * b)
print("integer quotient: ", a // b) # floor division truncates towards zero
print("remainder:        ", a % b) # Same sign as first operand
```

Here, `sys.argv` is a list of command line arguments and the index 1 and 2 correspond to the second (indexing starts from 0) and third elements in this list respectively. The conversion of these command line arguments into integers is done with `int()`. For printing, we use the print function directly without any brackets as it handles all formatting.
