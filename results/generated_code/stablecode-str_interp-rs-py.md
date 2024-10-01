Here is the equivalent Python code for your Rust code:

```python
def main(): 
    print(f"Mary had a {'little':^7} lamb")
    # You can specify order
    print(f"{1:^4} had a {0:^7} lamb")
    # Or named arguments if you prefer
    print(f"{name:^8} had a {adj:^7} lamb")

main()
```

In this Python script, `{}` are used for string formatting, and the `f-string` feature is utilized to achieve the desired interpolation effect. The named arguments technique (where you specify names within curly braces) is also used here to improve readability.
