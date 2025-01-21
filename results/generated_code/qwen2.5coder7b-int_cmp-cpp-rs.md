Here's how you can convert the given C++ code into Rust:

```rust
use std::io;

fn main() {
    println!("Please enter two integers.");

    let mut input = String::new();
    
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let numbers: Vec<i32> = input.split_whitespace()
                                  .filter_map(|s| s.parse::<i32>().ok())
                                  .collect();

    if numbers.len() != 2 {
        eprintln!("Please enter exactly two integers.");
        return;
    }

    let (a, b) = (numbers[0], numbers[1]);

    // test for less-than
    if a < b {
        println!("{} is less than {}", a, b);
    }

    // test for equality
    if a == b {
        println!("{} is equal to {}", a, b);
    }

    // test for greater-than
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}
```

This Rust code does the following:

- It prompts the user to enter two integers.
- The entered values are read as a string from stdin and then split into words. Each word is parsed into an integer. If parsing fails for any reason (e.g., if the input isn't a number), `filter_map` will skip over that item, so only valid numbers will be included in `numbers`.
- It checks to make sure exactly two integers were entered.
- Finally, it compares the two integers as per your original C++ code.
