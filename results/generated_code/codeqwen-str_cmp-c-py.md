The given code is written in C and it uses a number of string functions such as strcmp(), strcasecmp() etc. Let's convert this to Python:

```python
# Required imports
import sys

def compare(a, B):
    print("%-8s %3d %3d %3d %3d %3d" % (A, A == B, A != B, A > B, A < B, A >= B))

def comparecase(A, B):
    print("%-8s %3d %3d %3d %3d %3d" % (A, A.lower() == B.lower(), A.lower() != B.lower(), A.lower() > B.lower(), A.lower() < B.lower(), A.lower() >= B.lower()))

if __name__ == '__main__':
    print("	eq , ne , gt , lt , ge , le")
    for i in range(len(sys.argv) - 1):
        A = sys.argv[i]
        B = sys.argv[i + 1]
        compare(A, B)
        comparecase(A, B)
```

This Python script does the same as the original C code: it compares two strings and prints out whether they are equal or not in terms of lexical order. It handles both case sensitive and insensitive comparisons by converting all characters to lowercase before comparing. 

It also takes advantage of Python's built-in functions such as str.lower() and range(len()) for simpler code.

In Python, there is no need to manually write out all comparison operators like in C (e.g., STREQ, STRNE, etc.). Instead, you can use the direct comparison operators (<, >, ==, !=) which will return True or False for comparisons. When printing these results, we used the %-8s syntax, where - denotes left alignment, 8 is the field width and s denotes string type. This format specifier is similar to the one in C.

The sys.argv list holds command line arguments passed to the script. It contains the first element which is the path of the Python interpreter, followed by any other arguments that were passed when running the script from the command line.
