## Answer:
### Python 3
```python
def compare(A, B):
    if (A == B):
        print('\'%s\' and \'%s\' are lexically equal.' % (A, B))
    else:
        print('\'%s\' and \'%s\' are not lexically equal.' % (A, B))
    
    if (A.upper() == B.upper()):
        print("'%s' and '%s' are case-insensitive lexically equal." % (A, B))
    else:
        print("'%s' and '%s' are not case-insensitive lexically equal." % (A, B))
    
    if(A < B):
        print("'%s' is lexically before '%s'." % (A, B))
    elif(A > B):
        print("'%s' is lexically after '%s'." % (A, B))
        
    if A.upper() >= B.upper():
        print("'%s' is not lexically before '%s'." % (A, B))
    if A.lower() <= B.lower():
        print("'%s' is not lexically after '%s'." % (A, B))
    
    print("The lexical relationship is: ", str(ord(A) - ord(B)))
    print("The case-insensitive lexical relationship is: ", str(ord(A.upper()) - ord(B.upper())))
```
