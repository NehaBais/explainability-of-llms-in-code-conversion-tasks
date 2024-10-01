The provided C code has been converted to Rust. The conversion process involved adding appropriate dependencies and modifying the syntax accordingly.

Here's the equivalent Rust code:

```rust
use std::cmp::Ordering;

fn compare(a: &str, b: &str) {
    let result = a.cmp(b);

    match result {
        Ordering::Equal => println!("{} is equal to {}", a, b),
        Ordering::Less => println!("{} is less than {}", a, b),
        Ordering::Greater => println!("{} is greater than {}", a, b),
    }
}

fn compare_case(a: &str, b: &str) {
    let result = a.casecmp(b);

    match result {
        Ordering::Equal => println!("{} is equal to {} (ignoring case)", a, b),
        Ordering::Less => println!("{} is less than {}", a, b),
        Ordering::Greater => println!("{} is greater than {}", a, b),
    }
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    if args.len() < 3 {
        println!("Usage: rust-c-compare <string_a> <string_b>");
        return;
    }

    let a = &args[1]];
    let b = &args[2]];

    compare(a, b);
    compare_case(a, b);
}
```

The provided C code compares two strings for exact equality and inequality. It also demonstrates how to perform lexical comparisons of string values.

In the Rust version of the code, we use the `cmp` method from the standard library's `cmp` module. This allows us to perform comparisons between strings in a case-sensitive manner (i.e., using the `cmp` method)).

Additionally, to achieve a case-insensitive comparison, we use the `casecmp` method instead of `cmp`. The `casecmp` method performs lexical comparisons in a case-insensitive manner.

Note that in Rust, string values are represented as `&str` (i.e., string slices)). String slices are read-only references to a contiguous sequence of characters (i.e., UTF-8 encoded byte sequence)).

The provided C code takes two command line arguments (i.e., strings)) and compares them using the `compare` and `compare_case` functions defined in the Rust version of the code). The results of the comparisons are printed to the console using the `println!` macro from the Rust standard library's `fmt` module).

Note that the provided C code includes comments that explain how to compile and run the code using a Unix-like operating system (e.g., Linux, macOS)). These comments provide guidance for developers who want to translate the C code into another programming language such as Rust.
