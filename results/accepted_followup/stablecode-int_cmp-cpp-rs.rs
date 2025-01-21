use std::io;

fn main() -> io::Result<()> {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter first integer:");
    io::stdin().read_line(&mut a))
        .expect("Failed to read input.");

    println!("Enter second integer:");
    io::stdin()
        .read_line(&mut b))
        .expect("Failed to read input.");

    let a = match a.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => return Err(io::Error::new(io::ErrorKind::InvalidData, "Invalid integer provided."))))), expect("Failed to parse input into integers.");

    let b = match b.trim().parse::<i32>() {
        Ok(num) => num,
        Err(_) => return Err(io::Error::new(io::ErrorKind::InvalidData, "Invalid integer provided."))))), expect("Failed to parse input into integers.");

    println!("\nComparison of the two numbers:");

    match a.cmp(&b) {
        std::cmp::Ordering::Less => println!("{} is less than {}", a, b),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", a, b),
        std::cmp::Ordering::Greater => println!("{} is greater than {}", a, b),
    }

    Ok(())
}