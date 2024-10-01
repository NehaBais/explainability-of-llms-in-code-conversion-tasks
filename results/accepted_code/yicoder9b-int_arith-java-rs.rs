fn main() {
    print!("Enter the first number: ");
    let _ = std::io::stdout().flush();
    let mut a = String::new();
    match std::io::stdin().read_line(&mut a) {
        Ok(_n) => {}
        Err(_error) => {
            println!("Error reading from standard input");
            return;
        } // Return on error
    };
    let a: i32 = a.trim().parse().unwrap_or(-1); // Parsing string to integer or default -1 if error

    print!("Enter the second number: ");
    let _ = std::io::stdout().flush();
    let mut b = String::new();
    match std::io::stdin().read_line(&mut b) {
        Ok(_n) => {}
        Err(_error) => {
            println!("Error reading from standard input");
            return;
        } // Return on error
    };
    let b: i32 = b.trim().parse().unwrap_or(-1); // Parsing string to integer or default -1 if error

    let sum = a + b; // The result of adding 'a' and 'b'
    let difference = a - b; // The result of subtracting 'b' from 'a'
    let product = a * b; // The result of multiplying 'a' and 'b'
    let division = a / b; // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    let remainder = a % b; // The remainder of dividing 'a' by 'b'

    println!("{} + {} = {}", a, b, sum);
    println!("{} - {} = {}", a, b, difference);
    println!("{} * {} = {}", a, b, product);
    println!("quotient of {} / {} = {}", a, b, division); // truncates towards 0
    println!("remainder of {} / {} = {}", a, b, remainder); // same sign as first operand
}
