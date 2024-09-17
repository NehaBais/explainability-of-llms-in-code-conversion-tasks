use std::io::{self, Read};

fn main() {
    let mut input = String::new();

    io::stdin().read_to_string(&mut input).expect("Read line");
    let a: i32 = input.trim().parse().unwrap();
    input.clear();

    io::stdin().read_line(&mut input).expect("Read line");
    let b: i32 = input.trim().parse().unwrap();

    println!("a+b  = {}", a + b); // sum
    println!("a-b  = {}", a - b); // difference
    println!("a*b  = {}", a * b); // product
    println!("a/b  = {}", a / b); // quotient (rounded towards zero)
    println!("a%b  = {}", a % b); // remainder, if they are different.
}
