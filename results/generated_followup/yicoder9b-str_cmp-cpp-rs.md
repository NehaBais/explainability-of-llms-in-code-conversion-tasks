The errors are due to the fact that `T` does not implement certain traits (like `std::cmp::Ord`, `PartialEq`, or `Display`) which are required for certain operations in your function. 

To fix this error:
- Ensure you constrain T to implement the required traits using the `where` keyword.
  
Corrected Code:
```rust
fn demo_compare<T>(a: &T, b: &T) where T: std::cmp::Ord + std::cmp::PartialEq + std::fmt::Display {
    match a.partial_cmp(b) {
        Some(std::cmp::Ordering::Less) => println!("{} is less than {}.", a, b),
        Some(std::cmp::Ordering::Greater) => println!("{} is greater than {}.", a, b),
        _ => (), 
    }
    match a == b {
        true => println!("{} and {} are exactly equal.", a, b),
        false => println!("{} and {} are not equal.", a, b),
    }
}
```
