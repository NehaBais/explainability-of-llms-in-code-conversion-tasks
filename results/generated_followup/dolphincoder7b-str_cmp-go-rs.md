The error occurs because Rust doesn't have a direct string comparison with integers functionality like Go does. Therefore, we have to convert the strings into integers before performing comparisons. However, there is no built-in method in Rust for lexical comparison of numeric strings.
To solve this issue, I'm using the unicode-segmentation crate which provides functions for Unicode segmentation and collation tables. Here's how I rewrote the code:
```rust
extern crate unicode_segmentation;
use std::cmp::Ordering;
use unicode_segmentation::UnicodeSegmentation;

fn main()  {
    let c = "cat";
    let d = "dog";

    if c == d {
        println!("{} is bytewise identical to {}", c, d);
     } else {
        println!("{} is not bytewise identical to {}", c, d);
     }

     if c != d {
        println!("{} is bytewise different from {}", c, d);
     } else  {
        println!("{} is not bytewise different from {}", c, d);
     }

     let ordering = c.cmp_ignore_ascii_case(d);
     match ordering {
         Ordering::Less => {
            println!("{} is lexically before {}", c, d);
         }
         Ordering::Equal  => {
            println!("{} and {} are equal", c, d);
         }
         Ordering::Greater => {
            println!("{} is lexically after {}", c, d);
         }
     }

     let a = "1";
     let b = "2";
     if a.parse::<i32>().unwrap() < b.parse::<i32>().unwrap() {
        println!("{} is less than {}", a, b);
     } else if a.parse::<i32>().unwrap() == b.parse::<i32>().unwrap() {
        println!("{} and {} are equal", a, b);
     } else  {
        println!("{} is greater than {}", a, b);
     }

     let a_f = "1.5";
     let b_f = "2.0";
     if a_f.parse::<f64>().unwrap() < b_f.parse::<f64>().unwrap() {
        println!("{} is less than {}", a_f, b_f);
     } else if a_f.parse::<f64>().unwrap() == b_f.parse::<f64>().unwrap() {
        println!("{} and {} are equal", a_f, b_f);
     } else  {
        println!("{} is greater than {}", a_f, b_f);
     }

     let a_u64 = "10";
     let b_u64 = "20";
     if a_u64.parse::<u64>().unwrap() < b_u64.parse::<u64>().unwrap() {
        println!("{} is less than {}", a_u64, b_u64);
     } else if a_u64.parse::<u64>().unwrap() == b_u64.parse::<u64>().unwrap() {
        println!("{} and {} are equal", a_u64, b_u64);
     } else  {
        println!("{} is greater than {}", a_u64, b_u64);
     }
}
```
