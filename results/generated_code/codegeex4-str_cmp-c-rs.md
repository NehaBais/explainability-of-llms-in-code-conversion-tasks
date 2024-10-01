Rust has the `std::cmp` module which provides utilities for comparisons. The comparison operators (`==`, `<`, etc.) are already overloaded to work with strings (and other types). Here is how you can translate your C code into Rust:

```rust
extern crate libc;

use std::ffi::{CString, CStr};
use std::os::raw::c_char;
use std::ptr;

fn compare(a: &str, b: &str) {
    println!("{:<6}{:<2}{:<2}{:<2}{:<2}{:<2} {:<}",
             a,
             a == b, a != b, a > b, a < b, a >= b, b);
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!("{:<6}{:<2}{:<2}{:<2}{:<2}{:<2} {:<}",
             a,
             a.eq_ignore_ascii_case(b), !a.eq_ignore_ascii_case(b),
             b.to_lowercase() > a.to_lowercase(), b.to_lowercase() < a.to_lowercase(),
             b.len() == a.len() && (&b.to_lowercase()[..] >= &a.to_lowercase()[..]),
             b.len() == a.len() && (&b.to_lowercase()[..] <= &a.to_lowercase()[..]),
             b);
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    println!("eq , ne , gt , lt , ge , le");
    for i in 0..args.len()-1 {
        compare(&args[i], &args[i+1]);
        compare_case_insensitive(&args[i], &args[i+1]);
    }
}
```
You can compile this Rust code with `rustc`. You can run the program and pass arguments like so:

$ cargo build && ./target/debug/your_program ball bell ball ball YUP YEP     ball BELL ball BALL YUP yep

Note: This example uses the ASCII case insensitivity comparison (`a.eq_ignore_ascii_case(b)`) and to_lowercase() method which creates a new String. Depending on your specific use case, you may want to consider using `std::ascii::AsciiExt` for more efficient case insensitive comparisons without creating new Strings. 

As for handling numeric strings, Rust cannot directly compare numeric values as strings (e.g., "123" > "45"). You would need to convert the string into a number type before performing comparison.
