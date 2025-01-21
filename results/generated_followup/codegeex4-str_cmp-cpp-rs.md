The error occurred because Rust's type system does not allow direct comparisons between strings using `<` or `>` operators since they are generic types.

To fix this, we must restrict the generic type `T` to implement the `PartialOrd` trait which enables ordering operations (like `<`, `>`, etc.). The updated code is as follows:

```rs
use std::str::FromStr;

fn main() {
    // Case-sensitive comparisons.
    let a = String::from("1.2.Foo");
    let b = String::from("1.3.Bar");
    demo_compare(&a, &b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lower: String = a.to_lowercase();
    let b_lower: String = b.to_lowercase();
    demo_compare(&a_lower, &b_lower, "lexically");

    // Numeric comparisons; here 'f64' could be any type for which the
    // relevant FromStr trait is defined, eg i32, i64, etc.
    let num_a: f64 = match a.parse::<f64>() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid number"),
    };

    let num_b: f64 = match b.parse::<f64>() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid number"),
    };
    demo_compare(&num_a.to_string(), &num_b.to_string(), "numerically");
}

fn demo_compare<T: std::cmp::PartialEq + std::fmt::Display + std::cmp::PartialOrd>(a: &T, b: &T, semantically: &str) {
    println!(
        "{} and {} are {}exactly {} equal.",
        a,
        b,
        if *a != *b { "not " } else { "" },
        semantically
    );

    println!(
        "{} and {} are {}{}inequal.",
        a,
        b,
        if *a == *b { "not " } else { "" },
        semantically
    );

    println!(
        "{} is {} than {}.",
        a,
        if *a < *b { "less" } else { "greater or equal to" },
        b
    );

    println!(
        "{} is {} than {}.",
        a,
        if *a > *b { "greater" } else { "less or equal to" },
        b
    );
}
```
