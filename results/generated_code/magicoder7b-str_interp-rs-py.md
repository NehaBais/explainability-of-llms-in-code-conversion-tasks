 The equivalent Python code for the given Rust program would be as follows:

```python
def main():
    print("Mary had a {} lamb".format("little"))
    
    # You can specify order
    print("{1} had a {0} lamb".format("little", "Mary"))
    
    # Or named arguments if you prefer
    print("{name} had a {adj} lamb".format(name="Mary", adj="little"))

if __name__ == "__main__":
    main()
```

The `format` function in Python is used to perform string interpolation and it replaces placeholders with the corresponding values. The placeholders are usually indicated by curly braces {} and can be in any order.
