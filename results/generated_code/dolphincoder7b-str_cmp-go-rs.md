Here's a translation of your code to Rust:
```
use std::cmp::{Ordering};
use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is not bytewise identical to {}", c, d);
    }

    if c != d {
        println!("{} is bytewise different from {}", c, d);
    } else {
        println!("{} is not bytewise different from {}", c, d);
    }

    let ordering = c.cmp_ignore_ascii_case(d);
    match ordering {
        Ordering::Less => {
            println!("{} is lexically before {}", c, d);
        },
        Ordering::Equal => {
            println!("{} and {} are equal", c, d);
        },
        Ordering::Greater => {
            println!("{} is lexically after {}", c, d);
        }
    };

    let numeric_strings = ["100", "2"];
    // Note: We're converting the strings to usize for comparison.
    // This is necessary as Rust doesn't support direct string comparisons
    // with integers.
    let (a, b) = (numeric_strings[0].parse::<usize>().unwrap(), numeric_strings[1].parse::<usize>().unwrap());

    if a < b {
        println!("{} is lexically before {}", a, b);
    } else if a == b {
        println!("{} and {} are equal", a, b);
    } else {
        println!("{} is lexically after {}", a, b);
    }

    // Note: We're converting the strings to f64 for comparison.
    let (a_f, b_f) = (numeric_strings[0].parse::<f64>().unwrap(), numeric_strings[1].parse::<f64>().unwrap());
    
    if a_f < b_f {
        println!("{} is lexically before {}", a_f, b_f);
    } else if a_f == b_f {
        println!("{} and {} are equal", a_f, b_f);
    } else {
        println!("{} is lexically after {}", a_f, b_f);
    }

    // Note: We're converting the strings to u64 for comparison.
    let (a_u64, b_u64) = (numeric_strings[0].parse::<u64>().unwrap(), numeric_strings[1].parse::<u64>().unwrap());
    
    if a_u64 < b_u64 {
        println!("{} is lexically before {}", a_u64, b_u64);
    } else if a_u64 == b_u64 {
        println!("{} and {} are equal", a_u64, b_u64);
    } else {
        println!("{} is lexically after {}", a_u64, b_u64);
    }
}
```
