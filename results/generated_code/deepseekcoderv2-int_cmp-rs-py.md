## Solution 
```python
a,b = input('Enter 2 integers: ').split() # Get two numbers from user
print(f'The first number ({a}) {"is less than" if int(a)<int(b) else "equals" if int(a)==int(b) else "is greater than"} the second number ({b)}') # Compare them and print the result.
```
