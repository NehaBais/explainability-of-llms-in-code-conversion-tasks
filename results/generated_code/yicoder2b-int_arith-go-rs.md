This is the equivalent Rust code for your Golang program:

```rust
use std::io;

fn main() {
    let mut a = io::stdin().read_line(&mut a).unwrap(); // Get two integers from user
    let mut b = io::stdin().read_line(&mut b).unwrap(); 

    println!("{} + {} = {}", &a, &b, a+b); // display their sum
    println!("{} - {} = {}", &a, &b, a-b); // display their difference
    println!("{} * {} = {}", &a, &b, a*b); // display their product 
    println!("{} / {} = {}", &a, &b, a/b);  // truncates towards 0 (same as C++)
    println!("{} % {} = {:+}", &a, &b, a%b); // same sign as first operand
}
```
Note: This Rust code assumes there are two separate variables (`a` and `b`) to hold the input integers. Also, it reads from standard input (not from user inputs). If you want to get the numbers directly from command line arguments or some other source then adjust accordingly.
