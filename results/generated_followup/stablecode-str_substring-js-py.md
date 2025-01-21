Error: Unmatched ')'. 

Fix: Remove the extra closing parenthesis ')' at the end of the print statement.

Corrected code:

```python
str = "abcdefgh"
n = 2
m = 3

print(str[n:n+m]]))  # ====> "bcd"
```
