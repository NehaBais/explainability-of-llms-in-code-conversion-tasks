Here is the Python equivalent of your code. The Python print statements use str.format() to include variables in output strings, and Python can automatically determine how to round numeric types (like division), unlike C where you have to explicitly write a function for this purpose or use built-in library functions. Also, command line arguments are handled differently in Python than they are in C:

```python
import sys

def main(argv):
    if len(argv) < 3: 
        exit(1)
        
    b = int(argv[-1])
    if not b: 
        exit(2)
    
    a = int(argv[-2])
    
    print("a+b = {}".format(a + b))
    print("a-b = {}".format(a - b))
    print("a*b = {}".format(a * b))
    print("a/b = {:.0f}".format(a / b))  # truncates towards zero (or towards negative infinity)
    
    remainder = a % b
    if remainder:
        sign_match = "same" if ((a < 0 and b > 0) or (a > 0 and b < 0)) else "different"
        print("a%b = {} and the sign of the remainder matches the {}"
              .format(remainder, sign_match)) 
    else:
        print("a%b is not defined because dividing by zero")
        
if __name__ == '__main__':
    main(sys.argv)
```    
Note that in Python, if a variable name begins with an underscore character (e.g., _a or _b), it's generally understood to be intended for internal use within modules and is not imported along with the public interface of the module (i.e., its global variables are not included if the module is imported elsewhere). This is just a convention; Python doesn’t enforce any specific behavior in this regard.

