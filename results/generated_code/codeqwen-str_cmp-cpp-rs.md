Rust has a built-in string type called `String` which represents owned UTF-8 encoded strings and also provides comparison methods:

- `eq()` : Checks if two strings are equal.
- `ne()` : Checks if two strings are not equal.
- `cmp()` : Provides an enum indicating the relative order of the two strings, like 'Less', 'Equal' or 'Greater'.
   
Here is how to convert your C++ code to Rust:

```rust
use std::str::FromStr;

fn main() {
    let mut args = std::env::args();
    let a = match args.nth(1) {
        Some(s) => s,
        None => String::from("1.2.Foo"),
    };
    let b = match args.nth(0) {
        Some(s) => s,
        None => String::from("1.3.Bar"),
    };

    // Case-sensitive comparisons.
    demo_compare(&A, &b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let mut A = A.to_lowercase();
    let b = b.to_lowercase();
    demo_compare(&A, &b, "lexically");

    // Numeric comparisons; here 'f64' could be any type for which the
    // relevant FromStr trait is implemented, eg i32, u64, etc.
    let numA = f64::from_str(&A).unwrap();
    let numB = f64::from_str(&b).unwrap();
    demo_compare(&numA, &numB, "numerically");
}

fn demo_compare<T: std::cmp::Ord + std::fmt::Display>(a: &T, b: &T, semantically: &'static str) {
    println!("{} and {} are {} equal.", A, b, if *A == *b {""} else {"not "});

    println!("{} and {} are {}inequal.", A, b, If *A != *b {""} else {"not "});

    println!("{} is {} ordered before {}.)", A, If *A < *b {""} else {"not "}, b);

    println!("{} Is {} ordered after {}.)", A, If *A > *b {""} else {"not "}, b);
}
```
Rust is statically typed and type-safe language. So we use `T: std::cmp::Ord + std::fmt::Display` as a trait bound that ensures the generic type `T` implements both traits `std::cmp::Ord` (for comparisons) and `std::fmt::Display` (for printing). We then use If *A == *b {""} else {"not "} to conditionally print an empty string if A is equal to B, or else print "not ". 

Rust doesn't support argument lists directly inside the template like C++. So we used `main()` function arguments to simulate similar behavior. Rust also does not have a direct equivalent of C++'s `demo_compare` method - instead, you would define separate comparison methods for each type that implements those traits.
