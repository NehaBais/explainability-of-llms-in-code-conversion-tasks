fn main() {
    let mut input = String::new();
    println!("Please enter the first number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    let mut input = String::new();
    println!("Please enter the second number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);

    // Rust uses floor division for the `/` operator
    println!("a / b = {}, remainder {}", a / b, a % b);
}
