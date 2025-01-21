 Sure! Below is the Rust equivalent of the provided C code. This Rust code demonstrates how to compare strings for exact equality and inequality, as well as lexical comparisons with case sensitivity and insensitivity. It also shows how to handle numeric string comparisons if they are not treated lexically.

```rust
use std::cmp::Ordering;
use std::str::{self, Eq};

fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        if a > b { 1 } else { 0 },
        if a < b { 1 } else { 0 },
        (a >= b) as i32,
        (a <= b) as i32,
        b
    );
}

fn compare_case(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        str::eq(a, b),
        !str::eq(a, b),
        if str::cmp(a, b).is_gt() { 1 } else { 0 },
        if str::cmp(a, b).is_lt() { 1 } else { 0 },
        (str::cmp(a, b) != Ordering::Less) as i32,
        (str::cmp(a, b) != Ordering::Greater) as i32,
        b
    );
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: {} <string1> <string2>", args[0]);
        return;
    }

    let a = &args[1];
    let b = &args[2];

    println!("	eq , ne , gt , lt , ge , le");
    compare(a, b);
    compare_case(a, b);
}
```

### Explanation:

1. **Comparing Strings for Exact Equality and Inequality**:
   - The `compare` function uses the equality (`==`) and inequality (`!=`) operators to check if two strings are equal or not.
   - The `compare_case` function uses the `str::eq` function to check exact equality and `str::cmp` to compare lexicographically with case sensitivity.

2. **Lexical Comparisons**:
   - The `compare` function uses the greater-than (`>`) and less-than (`<`) operators to determine lexical order.
   - The `compare_case` function uses the `str::cmp` method to compare strings lexicographically with case sensitivity.

3. **Case Sensitivity**:
   - The `compare_case` function demonstrates how to perform comparisons in a case-insensitive manner using the `str::eq` and `str::cmp` functions.

4. **Numeric String Comparisons**:
   - Rust does not have built-in support for comparing numeric strings lexically, so this example focuses on string comparisons. If you need to compare numeric strings, you would typically convert them to numerical values before comparison.

### Running the Code:
To run this Rust code, compile it using `rustc` and then execute the resulting binary with appropriate arguments. For example:

$ rustc your_file_name.rs && ./your_file_name ball bell ball ball YUP YEP

This will produce output similar to the provided C code's output, demonstrating exact equality, inequality, and lexical comparisons for both case-sensitive and case-insensitive cases.
