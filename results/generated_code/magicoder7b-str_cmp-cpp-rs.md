 In Rust, the standard library provides a variety of string manipulation capabilities and methods. Here's how to perform similar operations as presented in the C++ code snippet:

```rust
use std::cmp::Ordering;

fn demo_compare<T>(a: T, b: T) 
where 
    T: Ord + Copy + AsRef<str>,
{
    println!("{} and {} are {:?} equal.", a, b, (a == b));
    println!("{} and {} are {:?}inequal.", a, b, (a != b));
    match a.cmp(&b) {
        Ordering::Less => println!(r#"{} is lexically ordered before {}"#, a, b),
        Ordering::Greater => println!(r#"{} is lexically ordered after {}"#, a, b),
        _ => (),
    }
}

fn main() {
    let a = std::env::args().nth(1).unwrap_or("1.2.Foo".to_string());
    let b = std::env::args().nth(2).unwrap_or("1.3.Bar".to_string());
    
    // Case-sensitive comparisons.
    demo_compare(a, b);
  
    // Case-insensitive comparisons by folding both strings to a common case.
    let mut a = a.to_lowercase();
    let mut b = b.to_lowercase();
    demo_compare(a, b);
  
    // Numeric comparisons; here 'f64' could be any type for which the relevant parsing is defined, eg i32, u64, etc.
    match a.parse::<f64>().unwrap() {
        Ok(numA) => 
            if let Ok(numB) = b.parse::<f64>() {
                demo_compare(numA, numB);
            },
        Err(_) => (),
    }
}
```
In the above code:
- `demo_compare` function is used to print comparison results.
- `Ord` trait is being implemented for generic type `T`. This trait provides a way to compare two instances of type `T` and allows you to specify how they should be ordered according to Rust’s total ordering rules.
- The comparisons are performed using the `cmp` method, which returns an Ordering enum value that indicates the outcome of the comparison: Less, Equal or Greater. 
- For case insensitive comparisons, we are converting both strings to lowercase before comparing them.
- For numeric string comparisons, I've used `parse::<f64>()` method which will attempt to parse a string slice into a f64 floating point number. If the parsing is successful then it is passed to `demo_compare` function otherwise it does nothing.
