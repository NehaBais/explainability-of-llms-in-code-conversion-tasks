Here is the equivalent Python code for your Golang program. In this version of the program, we use the input() function to get the integers from the user and int() function to convert their type because by default, input() returns a string. Then it checks whether n1 is less than, equal or greater than n2 using if-elif-else statements:
```python
n1 = int(input('enter number: ')) 
n2 = int(input('enter number: ')) 

if n1 < n2:
    print(str(n1) + " is less than " + str(n2))
elif n1 == n2:
    print(str(n1) + " is equal to " + str(n2))
else: # implies n1 > n2
    print(str(n1) + " is greater than " + str(n2)) 
```
