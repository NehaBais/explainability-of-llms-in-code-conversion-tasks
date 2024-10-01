Here's the equivalent Rust code for the given Golang code snippet:
```rust
fn main() {
 let c = "cat";
 let d = "dog";
 
 if c == d {
 println!("{} is bytewise identical to {}", c, d);
 } else {
 println!("{} is bytewise different from {}", c, d);
 }
 
 if c > d {
 println!("{} is lexically bytewise greater than {}", c, d);
 }
 
 if c < d {
 println!("{} is lexically bytewise less than {}", c, d);
 }
 
 if c >= d {
 println!("{} is lexically bytewise greater than or equal to {}", c, d);
 }
 
 if c <= d {
 println!("{} is lexically bytewise less than or equal to {}", c, d);
 }
 
 let eqf = "when interpreted as UTF-8 and compared under Unicode\nsimple case folding rules.";
 if c.to_lowercase() == d.to_lowercase() {
 println!("{} equal to {}: {}", c, d, eqf);
 } else {
 println!("{} not equal to {}: {}", c, d, eqf);
 }
}
```
This Rust code demonstrates the same functionality as the Golang code snippet but in a different way. Instead of using the built-in operators for string comparison, the code uses the `==`, `!=`, `>`, `<`, `>=`, and `<=` operators to compare strings. It also uses the `to_lowercase()` method on the `String` type to perform a case insensitive comparison. The use of the `strings` crate is not necessary in Rust as it provides similar functionality through its own methods and functions.

