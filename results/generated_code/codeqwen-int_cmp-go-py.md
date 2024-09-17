Here is the Python equivalent of your Golang code:

```python
n1 = int(input("Enter number: "))
n2 = int(input("Enter number: "))

if n1 < n2:
    print(n1, "less than", n2)
elif n1 == n2:
    print(n1, "equal to", n2)
else:
    print(n1, "greater than", n2)
```

Python does not have a built-in log.Fatal function which is used in Golang for logging fatal errors. Instead, Python uses the print statement to display messages. Additionally, we use the input() function instead of fmt.Scan() for getting input from user. The else clause with no condition checks if none of the previous conditions are true.
