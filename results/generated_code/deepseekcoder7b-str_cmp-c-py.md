In Python, you can use the built-in comparison operators for string to achieve these tasks. Here is a sample code in Python that uses these methods and demonstrates all cases mentioned in your requirement:

```python
def compare(a, b):
    print('Comparing strings {0} and {1}:'.format(a, b))
    
    # exact equality 
    if a == b:
        print('- Exact Equality : True')
    else:
        print('- Exact Equality : False')
        
    # inequality (i.e., the inverse of exact equality)
    if a != b:
        print('- Inequality : True')
    else:
        print('- Inequality : False')
    
    # lexical order
    if a < b:
        print('- Lexically ordered before than the other : True')
    else:
        print('- Lexically ordered before than the other : False')
        
    if a > b:
        print('- Lexically ordered after than the other : True')
    else:
        print('- Lexically ordered after than the other : False')
    
    # case sensitive comparison 
    if a.lower() == b.lower():
        print('- Case Sensitive Comparison : True')
    else:
        print('- Case Sensitive Comparison : False')
        
    # case insensitive comparison 
    if a.upper() == b.upper():
        print('- Case Insensitive Comparison : True')
    else:<｜begin▁of▁sentence｜>:
        print('- Case Insensitive Comparison : False')
    print("\n")
    
compare("ball", "bell")
compare("ball", "BALL")
compare("YUP", "YEP")
compare("ball", "BELL")
compare("ball", "BALL")
compare("YUP", "yep")
``` 
In Python, the `==` operator is used to check for exact string equality (case sensitive), and the `!=` operator checks if they are not equal. The `<` operator can be used to lexically compare strings in ascending order. Similarly, you use `>` for descending order. For case insensitive comparison, we convert the strings to either all upper or lower case before comparing them using Python's built-in methods like `lower()` and `upper()`.

