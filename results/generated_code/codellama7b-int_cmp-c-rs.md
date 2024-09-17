To convert the given C code to Rust, we can use the `scanf` function from the `std::io` module. We can also use the `println!` macro to print messages to the console. Here's the converted Rust code:
```
use std::io;

fn main() {
    let mut a = String::new();
    io::stdin().read_line(&mut a).unwrap();
    let a: i32 = a.trim().parse().unwrap();

    let mut b = String::new();
    io::stdin().read_line(&mut b).unwrap();
    let b: i32 = b.trim().parse().unwrap();

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    }
}
```
Note that in Rust, we need to use the `std::io` module for input/output operations. Also, we use the `trim()` method to remove whitespace characters from the input strings and then parse them into integers using the `parse()` method. Finally, we can use the `println!` macro to print messages to the console.
