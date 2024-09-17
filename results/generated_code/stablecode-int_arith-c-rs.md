The equivalent Rust code for the given C code would look like this:

```rust
use std::io;

fn main() {
    let mut a = String::new();
    println!("Enter first integer:");
    io::stdin().read_line(&mut a)).expect("Failed to read line");

    let mut b = String::new();
    println!("Enter second integer:");
    io::stdin().read_line(&mut b)).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Failed to parse input"),
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Failed to parse input"),
    };

    println!(
        "a+b={}, a-b={}, a*b={}, a/b={}, a%%b={}",
        a + b,
        a - b,
        a * b,
        a / b,
        a % b,
    );
}
```

Please note that Rust doesn't have the concept of signed division (like in C) for negative numbers. 

In Rust, dividing two negatives gives a result which is not an integer (i32 type). To get an integer quotient as in the original C code, we can use the `div` function from the Rust standard library to perform signed division and return a tuple of the quotient and remainder. However, this will change how Rust handles negative numbers and rounding.

Therefore, if you want to keep the behavior of rounding towards zero (towards 0) for both positive and negative integers, it is recommended to use C or C++ for this code conversion.
