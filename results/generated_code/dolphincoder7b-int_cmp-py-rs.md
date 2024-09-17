Here's the equivalent Rust code:
```rust
fn main() {
    let mut a = String::new();
    let mut b = String::new();
    
    println!("Enter value of a:");
    std::io::stdin().read_line(&mut a)
        .expect("Failed to read line.");
        
    println!("Enter value of b:");
    std::io::stdin().read_line(&mut b)
        .expect("Failed to read line.");

    let a: i32 = a.trim().parse()
        .expect("Please enter a number!");
        
    let b: i32 = b.trim().parse()
        .expect("Please enter a number!");

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else if a == b {
        println!("a is equal to b");
    }
}
```
This Rust code takes the inputs from the user using read_line and then parse them into integers. It compares these integers using the comparison operators as expected in the original Python code. The use of 'mut' keyword is due to how Rust handles strings that can be modified. If you want a cleaner version, you could use an immutable variable for a and b and pass their references to the comparison functions.
