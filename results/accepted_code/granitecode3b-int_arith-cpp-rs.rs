use std::io;
fn main() {
    println!("Enter two integers:");
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line");

    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = match a.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    let b: i32 = match b.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    println!("a+b = {}", a + &b);
    println!("a-b = {}", a - &b);
    println!("a*b = {}", a * &b);
    let q: i32 = a / b;
    let r: i32 = a % b;
    println!("a/b = {}, remainder {} = {}", q, a, r);
}
