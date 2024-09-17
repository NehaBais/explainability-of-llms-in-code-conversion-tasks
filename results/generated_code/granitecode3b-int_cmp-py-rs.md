Sure, here's the equivalent Rust code for your requirements:
```rust
use std::io;
 
fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");
 
    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");
 
    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();
 
    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else {
        println!("a is equal to b");
    }
}
```
The Rust code takes user input for two integers, converts them to integers using `parse()`, and then compares them using the three comparison operators (`<`, `>`, and `==`). The output message depends on which condition is true. 
You can test this program by running it and entering different values for a and b. For example:
```
Enter value of a: 5
Enter value of b: 10
a is less than b
 
Enter value of a: 10
Enter value of b: 5
a is greater than b
 
Enter value of a: 5
Enter value of b: 5
a is equal to b
```

