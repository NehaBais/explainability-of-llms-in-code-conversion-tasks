 Here is the equivalent code in Python:
```python
hello = "Hello world"
print(hello + "!!!!")
```
Or using a mutable variable:

hello = "Hello world"
hello += "!!!!"
print(hello)

Note that in Python, you can use the `+` operator to concatenate strings.
In Rust, you can use the `add()` method to add two strings together.
Also note that in Rust, you need to import the `std::ops::Add` trait to be able to use the `add()` method.
