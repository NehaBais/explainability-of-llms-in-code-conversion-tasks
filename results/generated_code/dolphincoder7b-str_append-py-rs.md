Here is the equivalent Rust code for your Python script:

```rust
fn main() {
    let str = "12345678";
    let mut new_str = str.to_string();
    new_str += "9!";
    println!("{}", new_str);
}
```

In Rust, you can use the `+=` operator to concatenate two strings together and assign it back to a mutable variable (`mut new_str`). The `+=` operator takes ownership of the string, so you have to convert it back into a `&str` using `.to_string()`. 

The equivalent in Python is:

str = "12345678"
new_str = str + "9!"  # concatenation
print(new_str)   # print new string

In Rust, you can use `+` or the `format!` macro to concatenate two strings together:


fn main() {
    let a = "123";
    let b = "456";
    
    // using +
    let c = a + b;
    println!("{}", c);

    // using format!
    let d = format!("{}{}", a, b);
    println!("{}", d);
}

In Python, you can use the `*` operator to repeat strings:

a = "123" * 3
print(a)  # prints "123123123"


The equivalent in Rust is:

fn main() {
    let a = "123".repeat(3);
    println!("{}", a);   // prints "123123123"
}
