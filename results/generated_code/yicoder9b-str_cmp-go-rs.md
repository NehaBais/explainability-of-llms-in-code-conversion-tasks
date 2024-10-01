In Rust:

```rust
fn main() {
    // Rust language string comparison operators:
    let c = "cat";
    let d = "dog";
    if c == d {"Equal"} else {"Not equal"}; println!("{} is exactly the same as {}.", c, d);
    if c != d {"Different"} else {"Same"};  println!("{} is not the same as {}.", c, d);
    if c > d { "Greater than" } else { "Not greater than" }; println!("{} is lexically higher than {}.", c, d);
    if c < d { "Less than" } else { "Not less than" }; println!("{} is lexically lower than {}.", c, d);

    // Case sensitive comparison
    if c == d {"Equal"} else {"Not equal"};  println!("Case Sensitive compare: {} is exactly the same as {}.", c, d);
    if c != d {"Different"} else {"Same"}; println!("Case Sensitive compare: {} is not the same as {}.", c, d);

    // Case insensitive comparison
    let mut e = String::from(c);
    e.make_ascii_uppercase();
    let mut f = String::from(d);
    f.make_ascii_uppercase();
    if e == f {"Equal"} else {"Not equal"};  println!("Case Insensitive compare: {} is exactly the same as {}.", c, d);
    if e != f {"Different"} else {"Same"}; println!("Case Insensitive compare: {} is not the same as {}.", c, d);

}
```
In this Rust version of your Go code, the `==` and `!=` operators are used to compare two strings for exact equality and inequality respectively. The `>` and `<` operators are used for lexical comparison which considers the ASCII value of each character in the string from left to right. 

The case sensitive comparison is done using the `==` operator directly, while the case insensitive comparison is done by converting both strings to uppercase first with the help of `make_ascii_uppercase()` method before comparing them.
