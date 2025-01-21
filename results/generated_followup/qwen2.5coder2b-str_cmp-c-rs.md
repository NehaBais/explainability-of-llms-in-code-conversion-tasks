The error is because the crate name cannot contain a dot (.), which it does in the given Rust code. 

To fix this, add `#![crate_name="str_cmp_c_rs"]` at the beginning of the file to set the crate name. The corrected code should look like this:

```rust
#![crate_name="str_cmp_c_rs"]

use std::cmp::{PartialEq, PartialOrd};
use std::str::{eq_ignore_ascii_case, cmp};

fn main() {
    let args: Vec<&str> = std::env::args().skip(1).collect();

    for i in 0..args.len() - 1 {
        println!(" {}{} {} {} {} {} {}", 
            &args[i],
            eq_ignore_ascii_case(&args[i], &args[i+1]),
            !eq_ignore_ascii_case(&args[i], &args[i+1]),
            cmp(&args[i], &args[i+1]) == Ordering::Greater,
            cmp(&args[i], &args[i+1]) == Ordering::Less,
            cmp(&args[i], &args[i+1]) == Ordering::GreaterEqual,
            cmp(&args[i], &args[i+1]) == Ordering::LessEqual,
            cmp(&args[i], &args[i+1]),
        );
    }

    for i in 0..args.len() - 1 {
        println!(" {}{} {} {} {} {} {}", 
            &args[i],
            eq_ignore_ascii_case(&args[i], &args[i+1]),
            !eq_ignore_ascii_case(&args[i], &args[i+1]),
            cmp(&args[i], &args[i+1]) == Ordering::Greater,
            cmp(&args[i], &args[i+1]) == Ordering::Less,
            cmp(&args[i], &args[i+1]) == Ordering::GreaterEqual,
            cmp(&args[i], &args[i+1]) == Ordering::LessEqual,
            cmp(&args[i], &args[i+1]),
        );
    }
}
```
