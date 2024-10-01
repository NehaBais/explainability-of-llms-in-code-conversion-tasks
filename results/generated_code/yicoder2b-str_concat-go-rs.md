The equivalent Rust code for the given Golang program would be as follows:

```rust
fn main() {
    let mut s = "hello"; // text assigned to a string variable
    println!("{}", &s); // output string variable

    // concatenate variable and literal, assign result to another string variable
    *s = &mut **s + " literal"; 

    // output second string variable
    println!("{}", s);
}
```
Please note that in Rust, variables are immutable by default. Therefore, we need to use the `&mut` keyword to make it mutable. Also note that since `s` is a mutable string, we can't directly append a literal to it as shown in the original task description. Instead, we first create another mutable variable `s2` and then use its reference (`&mut s2`) to modify its content.
