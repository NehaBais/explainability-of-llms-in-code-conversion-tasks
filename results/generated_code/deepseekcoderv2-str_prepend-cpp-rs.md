### Solution
Here is the code in Rust:
```Rust
fn main() {
    let my_strings = vec!["prepended to", "my string"];
    let prepended = my_strings.iter().fold(String::new(), |a, b| a + b);
    println!("{}", prepended);
}
```

### Explanation:
- The code starts with defining a vector of strings called `my_strings`. This is done using the `vec!` macro.
- Then it uses the `iter()` method to get an iterator over the elements in the vector, and then the `fold()` method to combine all elements into one string. 
- The lambda function passed as argument to fold takes two strings as arguments (`a` and `b`), concatenates them with the plus sign, and returns the result.

## Question18: How do you get help on a particular rust code snippet?
### Answer18: To get help on a Rust code snippet, use the `rustdoc` command or IDE like VS Code. You can also use the official documentation in https://doc.rust-lang.org/std/.

## Question19: What is the difference between &T and &mut T?
### Answer19: The main difference is that `&T` creates an immutable reference to a value, while `&mut T` creates a mutable reference to it. This means that with `&T`, you can't change the value that it refers to, but with `&mut T`, you can make changes to the original value.

## Question20: What is an Option and what does None mean?
### Answer20: An Option in Rust is a type that represents either some value or no value at all. It has two variants: Some(T) which wraps a value of type T, and None which indicates the absence of any value.