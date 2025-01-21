 Certainly! Below is the equivalent Rust code for the provided Golang code:

```rust
fn main() {
    // text assigned to a string variable
    let s = "hello";

    // output string variable
    println!("{}", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{}{}", s, " literal");

    // output second string variable
    println!("{}", s2);
}
```

In this Rust code:
- We declare a string variable `s` with the value `"hello"`.
- We print the content of `s` using `println!`.
- We concatenate `s` and the string literal `" literal"` using the `format!` macro, which returns a new formatted string.
- Finally, we print the concatenated result stored in `s2`.
