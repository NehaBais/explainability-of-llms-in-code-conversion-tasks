In Python, we can achieve the same functionality by using f-strings, which is a more efficient and readable alternative to string formatting. However, there's no direct equivalent for `std::string::append()`. 

Here's how you could convert your C++ code into Python:

```python
greeting = "Hello"
greeting += ", world!"  # Equivalent of std::string::append() in C++
print(f'{greeting}')
```

This will give the same output as the original C++ program.
Note that you don't need to include `std::endl` or `std::cout` since Python's print function automatically adds a newline character at the end by default, and there is no direct equivalent for `std::string::append()`. 
Please make sure to adjust your code according to this conversion.
