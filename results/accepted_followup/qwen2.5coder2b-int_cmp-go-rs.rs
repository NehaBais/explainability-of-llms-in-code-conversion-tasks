use std::io::{self, Result};

fn main() -> Result<()> {
    let mut n1 = String::new();
    let mut n2 = String::new();

    println!("Enter number: ");
    io::stdin().read_line(&mut n1)?;
    println!("Enter number: ");
    io::stdin().read_line(&mut n2)?;

    // Remove the newline character from the input
    n1.pop();
    n2.pop();

    match (n1.parse::<i32>(), n2.parse::<i32>()) {
        Ok((n1, n2)) => {
            if n1 < n2 {
                println!("{} is less than {}", n1, n2);
            } else if n1 == n2 {
                println!("{} is equal to {}", n1, n2);
            } else {
                println!("{} is greater than {}", n1, n2);
            }
        }
        Err(e) => eprintln!("Error parsing input: {}", e),
    }

    Ok(())
}
