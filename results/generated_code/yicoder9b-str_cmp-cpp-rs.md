Here is the equivalent code in Rust:

```rust
use std::cmp::Ordering;
fn main(args: Vec<String>) {
  // Case-sensitive comparisons.
  let a = if args.len() > 1 {"1.2.Foo"} else {&args[0]};
  let b = if args.len() > 2 {"1.3.Bar"} else {&args[1]};
  demo_compare(a, b);
}
fn demo_compare<T: AsRef<str>>(a: T, b: T) {
    match a.as_ref().cmp(b.as_ref()) {
        Ordering::Equal => println!("{} and {} are exactly equal.", a, b),
        Ordering::Less =>  println!("{} is ordered before {}.", a, b),
        Ordering::Greater =>  println!("{} is ordered after {}.", a, b),
    }
    match a.as_ref().ne(&b) {
      true => println!("{} and {} are not equal.", a, b),
      false => println!("{} and {} are exactly equal.", a, b),
  };}
```
In this Rust code we're using the `cmp` function from the `Ordering` enum to determine if strings `a` and `b` are lexically ordered before or after each other. We're also checking for exact equality (`ne`) as in the C++ example. 

For numeric comparisons, Rust has a type system that makes explicit type conversion explicit (unlike C++). You should therefore explicitly convert your string to a number format using `parse` function before comparing them numerically.

When comparing strings lexically, Rust's handling is similar to C++; `Ordering::Equal` for equality, and so on.

Note that the Rust way of doing things often involves more explicitness than in C++. For example, there’s no need to convert a string to lower-case before comparing them in case-insensitive manner as one would do with ::tolower function in C++. Instead, you can use `to_lowercase` method which is built specifically for that purpose.

Lastly, remember that strings are immutable by default in Rust and this will prevent us from modifying the original strings directly. Therefore, we need to create new mutable string variables (`a` and `b`) instead of modifying their original values.
