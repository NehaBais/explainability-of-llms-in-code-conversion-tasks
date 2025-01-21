use std::io;

fn main() {
    let mut a: i32;
    let mut b: i32;

    println!("Enter two integers: ");
    io::stdin().read_line(&mut a.to_string())
        .expect("Failed to read line");
    io::stdin().read_line(&mut b.to_string())
        .expect("Failed to read line");

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);

    if a >= 0 && b >= 0 {
        println!("Exponentiation (if operator exists) = {}", a.pow(b));
    } else {
        println!("Exponentiation (if operator exists) is undefined");
    }
}