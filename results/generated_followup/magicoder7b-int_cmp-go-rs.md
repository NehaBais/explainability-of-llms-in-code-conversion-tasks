 The errors in Rust are: 
1) "not a function" - This error occurs because `print!` is not recognised as a function, instead it's a macro provided by Rust. To invoke the macro we need to use `!`. So replace `print("Enter number: ");` with `print!("Enter number: ");`.
2) "method not found in Stdout" - This error occurs because the method `flush()` is not part of trait `Stdout`. The method should be used with the `Write` trait which is implemented for `Stdout`. So, import the `Write` trait using `use std::io::Write;`. 
To fix these errors and print to stdout in Rust, you would use this code:
```rs
use std::io::{self, Write};

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();
    
    io::stdout().write_all(b"Enter number: ").expect("Failed to write");
    io::stdin().read_line(&mut n1).expect("Failed to read line");
    
    io::stdout().write_all(b"Enter number: ").expect("Failed to write");
    io::stdin().read_line(&mut n2).expect("Failed to read line");
    
    let n1: i32 = match n1.trim().parse() {
        Err(_) => panic!("Not a number!"),
        Ok(n1) => n1,
    };
    
    let n2: i32 = match n2.trim().parse() {
        Err(_) => panic!("Not a number!"),
        Ok(n2) => n2,
    };
    
    if n1 < n2 {
        println!("{} is less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} is equal to {}", n1, n2);
    } else if n1 > n2 {
        println!("{} is greater than {}", n1, n2);
    }
}
```
Here we use `io::stdout().write_all()` and `io::stdin().read_line()` for reading user input. We parse the user input to integers before comparing them. If the parsing fails, we print an error message and stop execution with `panic!()`.
