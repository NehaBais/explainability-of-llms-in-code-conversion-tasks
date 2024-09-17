```rust
use std::io;

fn main() {
  let mut input = String::new();
  
  println!("Enter the first integer:");
  io::stdin().read_line(&mut input).expect("Failed to read line");
  let a: i32 = match input.trim().parse() {
    Ok(num) => num,
    Err(_) => {
      eprintln!("Could not read the numbers");
      return;
    }
  };

  println!("Enter the second integer:");
  io::stdin().read_line(&mut input).expect("Failed to read line");
  let b: i32 = match input.trim().parse() {
    Ok(num) => num,
    Err(_) => {
      eprintln!("Could not read the numbers");
      return;
    }
  };

  // test for less-than
  if a < b {
    println!("{a} is less than {b}");
  }

  // test for equality
  if a == b {
    println!("{a} is equal to {b}");
  }

  // test for greater-than
  if a > b {
    println!("{a} is greater than {b}");
  }
}
```
