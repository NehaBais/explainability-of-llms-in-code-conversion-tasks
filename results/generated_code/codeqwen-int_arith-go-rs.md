Here is the equivalent Rust code:

```rust
use std::io;

fn main() {
    println!("Enter two integers: ");
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut A).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let A: i32 = A.trim().parse().expect("Please type a number!");
    let b: i32 = b.trim().parse().expect("Please type a number!");

    println!("{} + {} = {}", A, b, A+b);
    println!("{} - {} = {}", A, b, A-b);
    println!("{} * {} = {}", A, b, A*b);
    println!("{} / {} = {:.0}", A, b, (A as f64) / (b as f64)); // truncates towards 0
    println!("{} % {} = {}", A, b, A%b); // same sign as first operand
}
```

This code works similarly to the Golang version. It reads two integers from the user and performs the required arithmetic operations. The only difference is that instead of `fmt.Printf`, I'm using `println!` for printing, which gives us a cleaner syntax with less boilerplate code. Also, Rust uses `expect` method to handle possible errors during parsing strings to integers.
For the exponentiation, note that Rust does not have an exponentiation operator, so we use the `as f64` and then perform the division as float numbers before returning it back to integer by using `.0`.
