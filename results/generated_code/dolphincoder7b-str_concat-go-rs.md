In Rust, we can achieve the same functionality using the following code:

```rust
fn main() {
    // text assigned to a string variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", s);

    // output second string variable
    println!("{}", s2);
}
```

In this code, we define a mutable `s` of type `String`, initialized with the value "hello". The `println!` macro is used to print the content of the string variable. 

Next, we concatenate the value of `s` and the literal " literal" using the `format!` macro, and assign this result to a new string variable called `s2`. We then output the content of `s2` using another `println!` macro. 

To run this code in your Rust environment, make sure you have the Rust toolchain installed on your machine (you can download it from [here](https://www.rust-lang.org/tools/install)). Once you have the required tools, navigate to your project directory and enter the following command: `cargo run` 

This will compile and execute the code, displaying the output as specified in the original task description.
