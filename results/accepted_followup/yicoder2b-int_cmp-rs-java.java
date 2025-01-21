use io::{self, BufRead};

fn main() {
    let mut reader = io::stdin();
    let mut buffer = String::new();
    match reader.read_line(&mut buffer) {
        Ok(()) => {},
        Err(_e) => println!("Not a valid number"),
    } 

    if let Err(e) = buffer.parse::<i32>() {
        println!("Error reading input: {}", e);
        return;
    }
    let nums = (0, &buffer.trim() as i32);
    let a: i32 = *nums;
    
    println!("Enter another integer:");
    match reader.read_line(&mut buffer) {
        Ok(()) => {},
        Err(_e) => println!("Not a valid number"), 
    }
    if let Err(e) = buffer.parse::<i32>() {
        println!("Error reading input: {}", e);
        return;
    }
    let b: i32 = *buffer as i32;
    
    match a.cmp(&b) {
        std::cmp::Ordering::Less => println!("{} is less than {}", a, b),
        std::cmp::Ordering::Equal => println!("{} equals {}", a, b),
        std::cmp::Ordering::Greater => println!("{} is greater than {}", a, b),
    }
}