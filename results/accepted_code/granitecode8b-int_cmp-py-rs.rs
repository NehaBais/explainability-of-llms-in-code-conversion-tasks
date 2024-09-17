use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter value of a:");
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let a: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    println!("Enter value of b:");
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");
    let b: i32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else {
        println!("a is equal to b");
    }
}
