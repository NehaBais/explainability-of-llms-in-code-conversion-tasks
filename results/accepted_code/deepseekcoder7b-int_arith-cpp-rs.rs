use std::io;

fn main() {
    let mut buffer = String::new();

    io::stdin()
        .read_line(&mut buffer)
        .expect("Failed to read line");
    let a: i32 = buffer.trim().parse().unwrap();

    buffer.clear();
    io::stdin()
        .read_line(&mut buffer)
        .expect("Failed to read line");
    let b: i32 = buffer.trim().parse().unwrap();

    println!("a+b  = {}", a + b);
    println!("a-b  = {}", a - b);
    println!("a*b  = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
}
