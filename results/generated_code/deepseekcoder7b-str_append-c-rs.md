The equivalent Rust code would be as follows:

```rust
fn main() {
    let mut str1 = String::from("Good Morning"); // Creating a string variable equal to any text value.
    
    // Appending the string variable with another string literal in the most idiomatic way.
    str1.push_str(" to all");
    str1.push_str(" !!!");
  
    // Show the contents of the variable after the append operation.
    println!("{}", str1);
}
```

In Rust, Strings are UTF-8 encoded by default and can be easily manipulated using `push_str` method which is equivalent to C's string concatenation functions such as `strcat()`. 

The result of the above code would be:

Good Morning to all ~~~

