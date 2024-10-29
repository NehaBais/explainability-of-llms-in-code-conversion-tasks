Here is the Python equivalent of your Rust code. The functionality in both languages is similar, but syntax differs between them.

Rust version:

fn main() {
    println!("Mary had a {} lamb", "little");
    println!("{1} had a {0} lamb", "little", "Mary");
    println!("{name} had a {adj} lamb", adj="little", name="Mary");
}


Python version:
```python
print("Mary had a {} lamb".format("little"))
print("{} had a {} lamb".format("Mary", "little"))
print("{name} had a {adj} lamb".format(name="Mary", adj="little"))
```

Both of these will print: `Mary had a little lamb`. You can replace "little" with any string value to change the result, same way you did in Rust code.

