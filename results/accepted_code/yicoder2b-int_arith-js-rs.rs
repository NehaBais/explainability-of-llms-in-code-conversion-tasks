use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Please enter first integer:");
    match io::stdin().read_line(&mut a) {
        Ok(_) => {}
        Err(e) => println!("Error: {}", e),
    }

    println!("Please enter second integer:");
    match io::stdin().read_line(&mut b) {
        Ok(_) => {}
        Err(e) => println!("Error: {}", e),
    }

    let a = match &a {
        &s if s.trim().is_empty() => 0,
        &s => i32::from_str(s).unwrap_or(0),
    };

    let b = match &b {
        &s if s.trim().is_empty() => 0,
        &s => i32::from_str(s).unwrap_or(0),
    };

    println!("a + b = {}", a + b); // This prints the sum of 'a' and 'b'
    println!("a - b = {}", a - b);
    println!("a * b = {}", a * b);
    if let Some((dividend, divisor)) = (&a, &b).max_by(|x, y| x.cmp(y)) {
        let quotient = dividend / divisor;
        println!("a / b = {} (rounded towards zero)", quotient); // rounds towards 0
    } else {
        println!("Cannot divide by zero");
    };
    if let Some((dividend, divisor)) = (&a, &b).min_by(|x, y| x.cmp(y)) {
        let remainder = dividend % divisor;
        println!("a % b = {} (sign of first operand if different)", remainder); // sign of first operand is the same
    } else {
        println!("Cannot compute remainder for division by zero");
    };
}
