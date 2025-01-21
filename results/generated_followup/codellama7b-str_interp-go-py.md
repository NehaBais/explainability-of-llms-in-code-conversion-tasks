The error is due to the use of the `package` keyword, which is not valid in Python 3.12. The correct way to define a module in Python is by using the `def` keyword followed by the name of the function or class.

To fix the error, you can remove the `package` keyword and replace it with the `def` keyword as follows:
```py
def main():
    str = "Mary had a %s lamb"
    txt = "little"
    out = fmt.Sprintf(str, txt)
    print(out)
```
This code should now run without any errors.
