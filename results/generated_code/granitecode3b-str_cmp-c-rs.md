Sure! Here's the Rust code that performs the same functionality as the C code:
```rust
use std::cmp::Ordering;
fn main() {
 let a = "ball";
 let b = "bell";
 
 println!("{} {} {}",
 a,
 eq(a, b),
 ne(a, b),
 gt(a, b),
 lt(a, b),
 ge(a, b),
 le(a, b));
 
 println!("{} {} {}",
 a.to_lowercase(),
 ceq(a, b),
 cne(a, b),
 cgt(a, b),
 clt(a, b),
 cge(a, b),
 cle(a, b));
 
 println!("{} {} {}",
 a,
 ord(a, b),
 ord(b, a),
 ne(a.to_uppercase(), b),
 ne(a.to_lowercase(), b),
 ne("b", "B"));
 
 println!("{} {} {}",
 a,
 ord(a, &b as *const _),
 ord(&b as *const _, a));
}
fn eq<T>(x: T, y: T) -> bool { x == y }
fn ne<T>(x: T, y: T) -> bool { x != y }
fn gt<T>(x: T, y: T) -> bool { x > y }
fn lt<T>(x: T, y: T) -> bool { x < y }
fn ge<T>(x: T, y: T) -> bool { x >= y }
fn le<T>(x: T, y: T) -> bool { x <= y }
fn ceq<T>(x: T, y: T) -> bool { x.to_lowercase() == y.to_lowercase() }
fn cne<T>(x: T, y: T) -> bool { x.to_lowercase() != y.to_lowercase() }
fn cgt<T>(x: T, y: T) -> bool { x.to_lowercase() > y.to_lowercase() }
fn clt<T>(x: T, y: T) -> bool { x.to_lowercase() < y.to_lowercase() }
fn cge<T>(x: T, y: T) -> bool { x.to_lowercase() >= y.to_lowercase() }
fn cle<T>(x: T, y: T) -> bool { x.to_lowercase() <= y.to_lowercase() }
fn ord<T>(x: T, y: T) -> Ordering where T: PartialOrd { x.cmp(&y) }
```
The Rust code uses the `eq`, `ne`, `gt`, `lt`, `ge`, and `le` functions to perform exact equality comparisons between two strings. The `ceq`, `cne`, `cgt`, `clt`, `cge`, and `cle` functions perform case-insensitive comparisons using the `.to_lowercase()` method. The `ord` function compares two strings lexically and returns an `Ordering` value.
I hope this helps! Let me know if you have any questions.

