Here is the equivalent Rust code for your Python script. Note that in this Rust version, we are using the read method from stdin.

```rust
use std::io::{self, Write};

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    // Get value of a 
    print!("Enter value of a: ");
    io::stdout().flush().unwrap();
    stdin().read_line(&mut a).expect("Did not receive input for a");
    let a: i32 = a.trim().parse().expect("Please type an integer!"); 

    // Get value of b 
    print!("Enter value of b: ");
    io::stdout().flush().unwrap();
    stdin().read_line(&mut b).expect("Did not receive input for b");
    let b: i32 = b.trim().parse().expect("Please type an integer!"); 

    // Compare the values of a and b
    if a < b {
        println!("a is less than b")
    } else if a > b {
        println!("a is greater than b")
    } else {
        println!("a is equal to b")
    };
}
```
