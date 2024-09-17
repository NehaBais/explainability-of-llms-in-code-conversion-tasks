use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    print!("Enter first integer: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input1).unwrap();

    print!("Enter second integer: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input2).unwrap();

    let a: i32 = input1.trim().parse().unwrap();
    let b: i32 = input2.trim().parse().unwrap();

    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
}
