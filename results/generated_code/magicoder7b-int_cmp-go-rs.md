 In Rust, you can use the `std::io` module and its methods to read input from a user. Here's the equivalent of your Golang code in Rust:

```rust
use std::io;

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();

    print("Enter number: ");
    io::stdout().flush().unwrap();
    
    io::stdin().read_line(&mut n1)
        .expect("Failed to read line");

    print!("Enter number: ");
    io::stdout().flush().unwrap();
    
    io::stdin().read_line(&mut n2)
        .expect("Failed to read line");

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

Note: 

- In Rust, `print!` and `println!` macros are used to print text.
- The `expect` method is used for error handling in Rust. It panics if the expected condition isn't true.
- In Rust, you have to parse input into a variable that is of type that can handle the expected result (like an integer in this case).
- Instead of log.Fatal in Golang, we use `panic!` in Rust for error handling.
