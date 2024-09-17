use std::io; // Import io module for input and output operations.
fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter value of A: ");
    match io::stdin().read_line(&mut a) {
        Ok(_) => {}
        Err(e) => {
            println!("Error reading line {}", e);
        }
    };
    let a = a.trim(); // Remove trailing whitespace and newline character from the input string.

    println!("Enter value of B: ");
    match io::stdin().read_line(&mut b) {
        Ok(_) => {}
        Err(e) => {
            println!("Error reading line {}", e);
        }
    };
    let b = b.trim(); // Remove trailing whitespace and newline character from the input string.

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else if a == b {
        println!("a is equal to b");
    };
}
