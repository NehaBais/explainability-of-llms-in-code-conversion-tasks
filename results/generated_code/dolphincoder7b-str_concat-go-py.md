In Python, we use the `str` function to convert variables into a string before concatenating them with other strings or literals. Here is how we can rewrite the provided code in Python:

```python
# text assigned to a string variable
s = "hello"

# output string variable
print(s)

# this output requested by original task descrption, although not really required by current wording of task description.
print(s + " literal")

# concatenate variable and literal, assign result to another string variable
s2 = s + " literal"

# output second string variable
print(s2)
```

This code should do the exact same as the original Golang code. However, in Python, we can't have a single `main` function in multiple files, so we need to move this script into a separate file. Let's save it as a script named "main.py" for now and execute this program with Python. You may need to install the "fmt" module if you haven't done so before running this code:

pip install fmt
