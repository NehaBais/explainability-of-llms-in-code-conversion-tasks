use std::io;

fn main() {
    // Get two integers from command line arguments
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    // Parse the integers from strings
    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();

    // Perform arithmetic operations
    let sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    let difference = a - b; // The result of subtracting  'b' from  'a'
    let product = a * b; // The result of multiplying  'a' and  'b'
    let division = a / b; // The result of dividing  'a' by  'b' (Note:  'division' does not contain the fractional result)
    let remainder = a % b; // The remainder of dividing  'a' by  'b'

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {} (truncated towards zero)", division); // truncates towards 0
    println!(
        "remainder of a / b = {} (same sign as the first operand)",
        remainder
    ); // same sign as the first operand
}
