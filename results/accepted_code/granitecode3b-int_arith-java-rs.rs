use std::io;
fn main() {
    let mut a: i32 = 0;
    let mut b: i32 = 0;
    println!("Enter two numbers: ");
    io::stdin()
        .read_line(&mut String::new())
        .expect("Failed to read line");
    let nums: Vec<&str> = String::new().split(" ").collect();
    a = nums[0].parse::<i32>().unwrap();
    b = nums[1].parse::<i32>().unwrap();

    let sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    let difference = a - b; // The result of subtracting 'b' from 'a'
    let product = a * b; // The result of multiplying 'a' and 'b'
    let division = a / b; // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    let remainder = a % b; // The remainder of dividing 'a' by 'b'

    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {}", division); // truncates towards 0
    println!("remainder of a / b = {}", remainder); // same sign as first operand
}
