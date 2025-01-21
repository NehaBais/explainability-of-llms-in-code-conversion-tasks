fn main() {
    let mut a: i32;
    let mut b: i32;

    println!("Enter two integers: ");
    std::io::stdin()
        .read_line(&mut a.to_string())
        .expect("Failed to read line");
    std::io::stdin()
        .read_line(&mut b.to_string())
        .expect("Failed to read line");

    let sum = a + b;
    let difference = a - b;
    let product = a * b;

    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);

    // Truncate towards 0
    let truncation_result: i32 = a / b;
    println!("{} / {} = {}", a, b, truncation_result);

    // Same sign as first operand or of the second operand
    let remainder_result = a % b;
    println!(
        "{} %% {} = {}",
        a,
        b,
        if a.sign() == b.sign() {
            remainder_result
        } else {
            -remainder_result
        }
    );
}
