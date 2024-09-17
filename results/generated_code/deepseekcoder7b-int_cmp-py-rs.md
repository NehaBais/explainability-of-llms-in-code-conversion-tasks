In Rust, you can use the `read_line` function of the standard input handle to read from console. The type conversion would be handled by `parse` method for integer types. Here is a simple implementation in Rust:

```rust
use std::io; // We import the io library to work with inputs and outputs

fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");
    
    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a integer value!");  // convert input string to int, we expect errors in case of invalid inputs
    let b: i32 = b.trim().parse().expect("Please type a integer value!");  
    
    if a < b {
        println!("a is less than b");
   <｜begin▁of▁sentence｜>}
    } else if a > b {
       println!("a is greater than b");
    } else if a == b {
       println!("a is equal to b"); 
```

In this code:
- We use the `read_line` function to read from console. The user input is stored in mutable strings `a` and `b`.
- Then, we parse those strings into integers (using `parse()`), handling any potential errors that may occur due to invalid inputs.
- Finally, we compare these two values using the three comparison operators mentioned in your python code. The appropriate message is printed based on which condition gets satisfied. 

Please note: Rust requires explicit return statement for all possible paths of a function if not specified by adding a semicolon (;), unlike Python. Therefore, there are no returns in this code example and it is considered as idiomatic Rust.

