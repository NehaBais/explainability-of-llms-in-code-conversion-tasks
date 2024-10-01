Here is the equivalent Rust code:

```rust
fn main() {
    // text assigned to a string variable
    let s = "hello";

    // output string variable
    println!("{}", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    println!("{}+literal", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{}{}", s, " literal"));

    // output second string variable
    println!("{}", s2);
}
```
This Rust code performs the exact same functionality as the provided Golang code. It creates a string variable equal to any text value and then concatenates it with another string literal. Finally, it prints out both of these variables.
