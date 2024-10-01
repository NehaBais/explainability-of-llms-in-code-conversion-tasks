Rust's approach to string comparison is similar to Golang’s. 

```rust
fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    }

    if c != d {
        println!("{} is bytewise different from {}", c, d);
    }

    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    }

    if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    }

    // Rust does not have a built-in operator for checking string
    // equality ignoring case. We can implement this functionality ourselves.
    let ignore_case_eq = |a: &str, b: &str| a.to_lowercase() == b.to_lowercase();

    if ignore_case_eq(c, d) {
        println!("{} equal to {} (case insensitive)", c, d);
    } else {
        println!("{} not equal to {} (case insensitive)", c, d);
    }

    // Rust also does not have an operator for checking if a string is greater than or less than another
    // based on their lexicographical order. We can implement this functionality ourselves.
    let lex_gt = |a: &str, b: &str| {
        for (a_char, b_char) in a.chars().zip(b.chars()) {
            if a_char > b_char {
                return true;
            } else if a_char < b_char {
                return false;
            }
        }

        a.len() > b.len()
    };

    let lex_lt = |a: &str, b: &str| !lex_gt(a, b);

    if lex_gt(c, d) {
        println!("{} is lexicographically greater than {}", c, d);
    }

    if lex_lt(c, d) {
        println!("{} is lexicographically less than {}", c, d);
    }
}
```
As for comparing numeric strings non-lexically (i.e., treating them as numbers), you could parse the string into an integer or float and then compare. However, Rust's type system ensures that only compatible types are compared.

Lastly, Rust does not support Unicode normalization, collation tables, or locale sensitive comparisons, unlike Golang which has extensive support for these features through its "sub repository" at golang.org/x/text.
