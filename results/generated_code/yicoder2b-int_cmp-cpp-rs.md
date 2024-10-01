Sure, here's the equivalent code in Rust:

```rust
fn main() {
    let mut a = 0;
    let mut b = 0;
    
    if let (Ok(a), Ok(b)) = std::io::stdin().read_line(&mut a).and_read_line(&mut b) => {} else {
        eprintln!("could not read the numbers");
        return;
    }

  // test for less-than
  if a < b {
      println!("{} is less than {}", a, b);
  }

  // test for equality
  if a == b {
      println!("{} is equal to {}", a, b);
  }

  // test for greater-than
  if a > b {
      println!("{} is greater than {}", a, b);
  }
}
```
This Rust code does exactly the same thing as the C++ one. It reads two integers from user input and uses `std::io` to read them in a single line. Then it checks for each case separately and prints out the result of the comparison.
