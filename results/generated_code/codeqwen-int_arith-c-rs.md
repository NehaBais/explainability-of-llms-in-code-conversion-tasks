The given C code is already in Rust, so no conversion is necessary. However, here's the version of the program with integer division rounding towards zero:

```rust
use std::io;

fn main() {
    println!("Enter two integers");

    let mut first = String::new();
    let mut Second = String::new();

    io::stdin().read_line(&mut First).expect("Failed to read line");
    io::stdin().read_line(&mut Second).expect("Failed to read line");

    let First: i32 = match First.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please type a number!"),
    };

    let Second: i32 = match Second.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please type a number!"),
    };

    println!("The sum is {}", First + Second);
    println!("The difference is {}", First - Second);
    println!("The product is {}", First * Second);
    println!("The integer quotient is {}", First / Second);
    println!("The remainder is {}", First % Second);
}
```

In this Rust program, we use the `io::stdin().read_line()` function to read input from the user. We then parse the inputs into integers using the `parse()` method and match them to ensure they are valid numbers. The results are printed out using the `println!()` macro.
