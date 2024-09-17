Sure, here's the Python code that achieves the same result:
```
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
if a < b:
 print("{} is less than {}".format(a, b))
elif a == b:
 print("{} equals {}".format(a, b))
else:
 print("{} is greater than {}".format(a, b))
```
This code prompts the user to enter two integers and stores them in variables `a` and `b`. It then uses an `if-elif-else` statement to check which condition is true. If `a` is less than `b`, it prints a message saying that `a` is less than `b`. If `a` is equal to `b`, it prints a message saying that `a` equals `b`. If neither of the other conditions are true, it means that `a` is greater than `b`, and it prints a message saying that `a` is greater than `b`.

