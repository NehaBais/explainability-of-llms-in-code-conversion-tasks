Here's the Python equivalent of your Java code:

```python
def comp_int():
   try:
       nbr1 = int(input())
       nbr2 = int(input())

       if nbr1 < nbr2:
           print(f"{nbr1} is less than {nbr2}")
       
       if nbr1 > nbr2:
           print(f"{nbr1} is greater than {nbr2}")
        
       if nbr1 == nbr2:
           print(f"{nbr1} is equal to {nbr2}")
   except ValueError: 
       pass
```
In Python, you don't need importing of packages for input and exception handling. The function `input()` reads a line from the standard input (usually the keyboard), and returns it as a string. When using the int() function, this returned string is converted to an integer if possible. If not, a ValueError will be raised that can then be caught by following lines of code.

