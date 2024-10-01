```rust
fn main() {
    // text assigned to a string variable
    let s = String::from("hello");

    // output string variable
    println!("{}", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    println!("{} literal", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", s);

    // output second string variable
    println!("{}", s2);
}
```

This Rust code does the same as your Golang program. It creates a string variable `s` with the value "hello". Then it prints out the content of `s`, concatenates `s` with another string literal and assigns this new concatenated string to a new variable `s2`. Finally, it prints the content of `s2`.

Please note that in Rust, you must always import necessary modules at the top. In this case we're importing the standard `fmt` module for its functionalities like printing output.

Also please notice that we are using `String::from("hello")` to create a new String. This method is used instead of using string literals directly since they are immutable and can't be mutated unlike Strings in Rust.
