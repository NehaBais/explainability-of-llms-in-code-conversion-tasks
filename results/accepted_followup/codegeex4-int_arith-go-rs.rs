use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    print!("Enter two integers: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input1).unwrap();

    print!("Enter two integers: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input2).unwrap();

    let a: i32 = input1.trim().parse().expect("Invalid integer");
    let b: i32 = input2.trim().parse().expect("Invalid integer");

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);

    // In Rust, / operator rounds towards zero (like Go). We can verify this by printing out the floating-point division and the integer division.
    println!("{} / {} = {} (integer division)", a, b, a / b);
    println!(
        "{} / {} = {} (floating point division)",
        a,
        b,
        (a as f32) / (b as f32)
    );

    println!("{} %% {} = {}", a, b, a.rem_euclid(b)); // same sign as first operand

    // Exponentiation operator can be achieved using the pow() function.
    // Rust's standard library does not provide this directly, but we can implement it ourselves
    let power = a.pow(b.abs() as u32);
    println!("{} ^ {} = {}", a, b, if b > 0 { power } else { 1 / power }); // same sign as first operand
}
