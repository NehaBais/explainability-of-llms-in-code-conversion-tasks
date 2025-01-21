fn main() {
    let mut a = String::new();
    let mut b = String::new();
    println!("Enter two integers:");
    std::io::stdin().read_line(&mut a);
    std::io::stdin().read_line(&mut b);
    a = a.strip_prefix(' ').unwrap_or(&a).to_string();
    b = b.strip_prefix(' ').unwrap_or(&b).to_string();
    let a: i32 = a.parse().expect("Enter valid integer");
    let b: i32 = b.parse().expect("Enter valid integer");
    let sum = a + b;
    let difference = a - b;
    let product = a * b;
    let quotient = a / b; // rounds towards 0
    let remainder = a % b; // same sign as first operand
    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    println!("{} / {} = {}", a, b, quotient);
    println!("{} %% {} = {}", a, b, remainder);
}
