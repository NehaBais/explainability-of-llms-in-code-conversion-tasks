The error is caused by having an unescaped closing brace (`}`)) inside a f-string (delimited by triple quotes). To fix this, we need to escape the closing brace with a backslash (`\`)). Here's the corrected code:
```python
def bitwise(a: int, b: int) 
-> None:
    print(f"a and b: 
{a & b}")
    print(f"a or b: 
{a | b}")
    print(f"a xor b: 
{a ^ b}")
    print(f"not a: 
{~a}")
    print(f"a << n: 
{a << b}}")  # left shift
    print(f"a >> n: 
{a >> b}}")  # arithmetic right shift 
```
