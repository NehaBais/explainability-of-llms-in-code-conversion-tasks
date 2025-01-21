fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter the first integer:");
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    println!("Enter the second integer:");
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");

    let a: i32 = input1.trim().parse().expect("Please type a number!");
    let b: i32 = input2.trim().parse().expect("Please type a number!");

    println!("a + b = {}", a + b);
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    println!("a / b = {}", a / b); // Rounds towards zero
    println!("a % b = {}", a % b); // Matches the sign of the first operand
}
