 In Rust, the code would look like this:

```rust
fn main() {
    // text assigned to a String variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", s);

    // this output is required by current wording of task description.
    println!("{}{}", s, " literal");

    // concatenate variable and literal, assign result to another String variable
    let mut s2 = format!("{}{}", s, " literal");

    // output second string variable
    println!("{}", s2);
}
```

In this code:
- I used `String::from` function instead of `"hello"` because Rust doesn't allow direct conversion from a string literal to a mutable variable.
- `println!` macro is used to print the string variable and also to concatenate two string literals into another variable.
- To avoid confusion, I renamed original variable `s` to `s1` and new variable `s2`, because in Rust you can't overwrite a value with the same name without using mut keyword to make it mutable.
