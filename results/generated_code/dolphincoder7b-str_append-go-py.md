This is how you can convert the given Golang code to Python:

```python
from io import StringIO

def main():
    # Initialize a string buffer
    s = StringIO()

    # Append strings using write function
    s.write('foo')
    s.write('bar')

    # Print content of the string buffer
    print(s.getvalue())
```
In this code, we use `StringIO` from `io` module to create a string buffer. This is similar to `StringBuilder` in Golang and Java. The `write` function allows us to append strings to the buffer. Finally, we print the content of the buffer using `getvalue()` function which returns a string value representing the current contents of the buffer.

You can test this Python code with any text values by modifying the `write` function calls to include your desired text values.
