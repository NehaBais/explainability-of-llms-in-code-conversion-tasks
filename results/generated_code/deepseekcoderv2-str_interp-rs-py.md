 Certainly! Below is the equivalent Python code that performs string interpolation as described in your Rust example:

```python
def main():
    print("Mary had a {} lamb".format("little"))
    
    # You can specify order
    print("{1} had a {0} lamb".format("little", "Mary"))
    
    # Or named arguments if you prefer
    print("{name} had a {adj} lamb".format(adj="little", name="Mary"))

if __name__ == "__main__":
    main()
```

This Python code uses the `format` method for string interpolation, similar to how Rust's `println!` with curly braces performs interpolation. The syntax is quite similar, allowing you to place variables or values within the placeholder brackets.
