This is how the code would look in Rust. Note that for this type of problem, we are comparing strings numerically, which requires converting string to number using a stream, not lexical comparison.

Here's the conversion:

```rust
fn demo_compare<T>(a: &str, b: &str, semantically: &str) 
    where T : std::cmp::Ord + std::fmt::Display + 'static,
{
    println!("{} and {} are exactly {} equal.", a, b, if a == b { "" } else { "not " });
    println!("{} and {} are exactly {}inequal.", a, b, if a != b { "" } else { "not " });
    println!("{} is {}lexically ordered before {}.", a, if a < b { "" } else { "not " }, b);
    println!("{} is {}lexically ordered after {}.", a, if a > b { "" } else { "not " }, b);
}

fn main() {
    // Case-sensitive comparisons.
    let a = (if std::env::args().len() > 1 { &std::env::args()[1] } else { "1.2.Foo" });
    let b = (if std::env::args().len() > 2 { &std::env::args()[2] } else { "1.3.Bar" });
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = if let ok(_) = a.chars().fold(Vec::new(), |mut acc, c| {
        acc.push((c as u32).to_ascii_lowercase());
        return Ok(true);
    }){ _ } else { unreachable!("unable to convert string to vector of chars") };
    let b = if let ok(_) = b.chars().fold(Vec::new(), |mut acc, c| {
        acc.push((c as u32).to_ascii_lowercase());
        return Ok(true);
    }){ _ } else { unreachable!("unable to convert string to vector of chars") };
    demo_compare(&a, &b, "lexically");

    // Numeric comparisons. Here `f64` could be any type for which the relevant >> operator is defined, eg i32, u32, etc.
    let num_a: f64;
    let num_b: f64;
    if let Ok(v) = num_a.try_from_str(&a){
        num_b = if let Ok(v) = num_b.try_from_str(&b){ v } else { panic!() }; 
    } else { unreachable!("unable to convert string to float") };
    demo_compare(&num_a, &num_b, "numerically");
}
```
In this code:
- `f64.try_from_str(&s)` is used to parse the string s into a number of type f64. If successful, it returns the number; otherwise, it panics with an appropriate error message. This matches Rust's standard numeric conversion semantics.
- `Vec::new()` is used to create a new vector to hold the characters from the strings. This will be modified in-place by the `chars().fold()` method.
- The `try_from_str` functions are used here, which attempt to parse the string into an object of type T (where T implements `std::cmp::Ord + std::fmt::Display`), and return a Result containing either the parsed object or an error indicating why it can't be parsed. This ensures that we catch any errors early in our conversion process.
- Note that if you wish to use Rust as a general-purpose language, you may need to add other dependencies (like `serde` for serialization/deserialization) and manage the memory more explicitly, especially when converting between different types.
- It's not possible with Rust to compare lexically strings for numbers, so we have to convert the string into a number before performing the comparison. If we were using this in an actual program, you would add a try_from_str method like above to handle this case.
