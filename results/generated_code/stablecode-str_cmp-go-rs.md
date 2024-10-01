Here's the equivalent Rust code:

```rust
use std::cmp::Ordering;

fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is bytewise different from {}", c, d));
    }

    match c.cmp(d) {
        Ordering::Equal => println!("{} is lexically bytewise identical to {}", c, d)),
        Ordering::Greater => println!("{} is lexically bytewise greater than {}", c, d)),
        Ordering::Less => println!("{} is lexically bytewise less than {}", c, d))
    }

    let insensitive_c: &str = "Cat";
    let insensitive_d: &str = "dog";
   
    if insensitive_c.casecmp(insensitive_d) == 0 {
        println!("{} is case-insensitively equal to {}", insensitive_c, insensitive_d));
    } else {
        println!("{} is case-insensitively different from {}", insensitive_c, insensitive_d));
    }
}
```
The code provided in Golang has been converted into Rust. This conversion demonstrates how to compare two strings in Rust and achieve lexical comparisons. 

The Rust code uses the standard library's `cmp` module for string comparison. The `cmp::Ordering` enum is used to determine the relative order of two strings.

To perform case-insensitive comparisons, the code uses the `casecmp()` method provided by the Rust standard library's `str` type. This method returns a `cmp::Ordering` value indicating whether the strings are equal, lexically ordered before the other string, or lexically ordered after the other string.

Overall, the converted Rust code demonstrates how to perform exact and lexical comparisons of two strings in Rust.
