 Rust doesn't have built-in string comparison macros like `STREQ`, `STRNE`, etc. So, for this example we will use a function to perform the comparisons:

```rust
fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        a <= b,
    );
}

fn compare_case(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a.eq_ignore_ascii_case(b),
        !a.eq_ignore_ascii_case(b),
        !a.ge_ignore_ascii_case(&b),
        a < b,
        !a.le_ignore_ascii_case(&b),
        !a.lt_ignore_ascii_case(b)
    );
}

fn main() {
    let mut args: Vec<String> = std::env::args().skip(1).collect();
    
    while !args.is_empty(){
        let a = args.remove(0);
        let b = args.remove(0);
        
        compare(&a, &b);
        compare_case(&a, &b);
    }
}
```
In this Rust version:
- `a == b` is the lexical comparison.
- `!a != b` checks if two strings are not equal (i.e., inverse of exact equality).
- `a > b` and `a < b` check for lexicographical ordering.
- `a >= b` and `a <= b` check for "greater than or equals to" and "lesser than or equals to" respectively, which are the lexicographically correct equivalents of the previous comparisons.
- `a.eq_ignore_ascii_case(b)` performs a case insensitive comparison (ignoring ASCII differences like capitalization). It will return true if both strings are equal in terms of their contents but differ only in their casing, false otherwise.
