 In Rust, you can use `io::stdin().read_line()` to get input from the user. Here is how it could look:

```rust
use std::io;

fn compare(a: i32, b: i32) {
    if a == b {
        println!("{} equals {}", a, b);
    }
    if a < b {
        println!("{} is less than {}", a, b);
    }
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}

fn main() {
    let mut input1 = String::new();
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    let a: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please provide an integer"),
    };
    
    let mut input2 = String::new();
    io::stdin().read_line(&mut input2).expect("Failed to read line");
    let b: i32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please provide an integer"),
    };
    
    compare(a, b);
}
```

This Rust code does the same thing as your JavaScript code: reads two integers from the user, and then compares them using `compare` function. The comparison operators `<`, `>`, and `==` are used according to your specifications.
