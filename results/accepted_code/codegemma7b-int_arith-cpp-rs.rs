use std::io;

fn main() {
    let mut a = 0;
    let mut b = 0;
    io::stdin().read_line(&mut a.to_string()).unwrap();
    io::stdin().read_line(&mut b.to_string()).unwrap();
    a = a.parse::<i32>().unwrap();
    b = b.parse::<i32>().unwrap();
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {:?}, remainder {}", a / b, a % b);
}
