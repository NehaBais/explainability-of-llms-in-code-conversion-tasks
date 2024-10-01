Rust does not have a direct equivalent to the C++ template-based implementation. However, we can use Rust's built-in string comparisons and case conversions to achieve the same results as in the given C++ code. Here is an example of how we can convert it into Rust:

```rust
use std::cmp;

fn main() {
    // Case-sensitive comparisons
    let a = if let Some(a) = std::env::args().nth(1) {
        a
    } else {
        String::from("1.2.Foo")
    };

    let b = if let Some(b) = std::env::args().nth(2) {
        b
    } else {
        String::from("1.3.Bar")
    };
    
    println!("{:?} and {:?} are {}equal.", a, b, if a == b { "" } else { "not " });
    println!("{:?} and {:?} are {}inequal.", a, b, if a != b { "" } else { "not " });

    let result = cmp::partial_cmp(&a, &b);
    match result {
        Some(result) => {
            println!(
                "{:?} is {}ordered before {:?}.",
                a,
                if result == std::cmp::Ordering::Less { "" } else { "not " },
                b
            );
            println!(
                "{:?} is {}ordered after {:?}.",
                a,
                if result == std::cmp::Ordering::Greater { "" } else { "not " },
                b
            );
        }
        None => println!("{:?} and {:?} are not comparable.", a, b),
    };

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lower = a.to_ascii_lowercase();
    let b_lower = b.to_ascii_lowercase();
    println!(
        "{:?} and {:?} are {}equal.",
        a_lower,
        b_lower,
        if a_lower == b_lower { "" } else { "not " }
    );
    println!(
        "{:?} and {:?} are {}inequal.",
        a_lower,
        b_lower,
        if a_lower != b_lower { "" } else { "not " }
    );

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant  operator is defined.
    let numA: f64 = a.parse().unwrap();
    let numB: f64 = b.parse().unwrap();
    println!(
        "{:.2} and {:.2} are {}equal.",
        numA,
        numB,
        if numA == numB { "" } else { "not " }
    );
    println!(
        "{:.2} and {:.2} are {}inequal.",
        numA,
        numB,
        if numA != numB { "" } else { "not " }
    );
}
```
In the above Rust code, we have used `cmp::partial_cmp` to compare two strings lexically. The `Ordering` enum represents the possible ordering relationships between two values, and `Some(result)` means there was a successful comparison and `None` means that the values are not comparable (for example, if one of them is NaN).
We also use `to_ascii_lowercase` to convert strings to lower case. Finally, we parse strings to f64 for numeric comparisons using `parse`.
Please note that Rust does not have a direct equivalent to C++'s template-based implementation as it supports type inference and generics which are used in the given C++ code.
