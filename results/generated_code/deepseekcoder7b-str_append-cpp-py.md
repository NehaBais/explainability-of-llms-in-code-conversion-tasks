Here is the Python equivalent of your C++ code:

```python
greeting = "Hello"
greeting += ", world!"
print(greeting)
```
This will output `Hello, world!` as expected. 

In this version of the python code we're using the `+=` operator to append the string (equivalent of `append()` in C++). The Python interpreter automatically converts a new string into the variable if += is used on it - there is no need for any special handling. It then prints out this updated value with `print()` function which behaves similarly to `std::cout <<` in your original code.

