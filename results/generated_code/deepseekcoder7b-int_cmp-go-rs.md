The equivalent Rust code would be as follows:

```rust
use std::io;

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();
    
    println!("enter number: ");
    io::stdin().read_line(&mut n1).expect("Read line failed");
    println!("enter number: ");
    io::stdin().read_line(&mut n2).expect("Read line failed");

    let n1: i32 = n1.trim().parse().expect("Please type a integer value!");
    let n2: i32 = n2.trim().parse().expect("Please type a integer value!");
    
    match n1.cmp(&n2) {
        std::cmp::Ordering::Less => println!("{} less than {}", n1, n2),
        std::cmp::Ordering::Equal => println!("{} equal to {}", n1, n2),
        std<｜begin▁of▁sentence｜>@std::cmp::Ordering::Greater => println!("{} greater than {}", n1, n2),
    }
}
```
This code does the same thing as your Go code: it reads in two integer values from the user and then prints a message to indicate whether `n1` is less than, equal to or greater than `n2`. The key differences are that Rust doesn't have implicit type conversion like Golang so you need to parse string to integer manually. Also it uses `std::io` module for reading from standard input in place of `fmt.Scan()` function and expects user inputs as strings initially which is parsed into integers with `parse().expect()` method. For the switch-case equivalent, Rust uses the `match` statement instead with comparison done using `cmp()`.

