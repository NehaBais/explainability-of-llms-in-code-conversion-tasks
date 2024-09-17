fn main() {
    let mut a = 0;
    let mut b = 0;
    println!("Enter two integers:");
    std::io::stdin().read_line(&mut a.to_string());
    std::io::stdin().read_line(&mut b.to_string());
    a = a.trim().parse().unwrap();
    b = b.trim().parse().unwrap();
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
