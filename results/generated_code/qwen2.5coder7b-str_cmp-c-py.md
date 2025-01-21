Here is the Python equivalent of your C code:

```python
def compare(a, b):
    print(f'{a}{2*STREQ(a,b)}{2*STRNE(a,b)}{2*STRGT(a,b)}{2*STRLT(a,b)}{2*STRGE(a,b)}{2*STRLE(a,b)} {b}')

def comparecase(a, b):
    print(f'{a}{2*STRCEQ(a,b)}{2*STRCNE(a,b)}{2*STRCGT(a,b)}{2*STRCLT(a,b)}{2*STRCGE(a,b)}{2*STCLE(a,b)} {b} ignoring case')

def STREQ(A, B):
    return A == B

def STRNE(A, B):
    return not STREQ(A, B)

def STRLT(A, B):
    return A < B

def STRLE(A, B):
    return A <= B

def STRGT(A, B):
    return STRLT(B, A)

def STRGE(A, B):
    return STRLE(B, A)

def STRCEQ(A, B):
    return A.lower() == B.lower()

def STRCNE(A, B):
    return not STRCEQ(A, B)

def STRCLT(A, B):
    return A.lower() < B.lower()

def STRCLE(A, B):
    return A.lower() <= B.lower()

def STRCGT(A, B):
    return STRCLT(B, A)

def STRCGE(A, B):
    return STRCLE(B, A)

print("eq ne gt lt ge le")
for i in range(1, len(sys.argv), 2):
    compare(sys.argv[i], sys.argv[i+1])
    comparecase(sys.argv[i], sys.argv[i+1])
```
This Python version uses the `sys` module to access command-line arguments and print formatted strings. The comparison functions are implemented with built-in operators for string comparison, which provide both case sensitive (`==`, `!=`, `<`, `<=`, `>`, `>=`) and case insensitive (`lower()` method) behavior.

Note that in Python, the `print` function can format strings directly using curly braces `{}`. The `2*...` expressions multiply boolean values by 2 to convert `True` into `' 1'` and `False` into `' 0'`.
