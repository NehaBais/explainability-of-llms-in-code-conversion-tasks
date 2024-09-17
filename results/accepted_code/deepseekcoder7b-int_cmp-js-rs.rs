use std::io;

fn main() {
    let mut input = String::new();

    println!("Enter the first integer:");
    io::stdin()
        .read_line(&mut input)
        .expect("Read line failed!");
    let a: i32 = match input.trim().parse() {
        Err(_) => panic!("Invalid number entered!"),
        Ok(num) => num,
    };

    println!("Enter the second integer:");
    io::stdin()
        .read_line(&mut input)
        .expect("Read line failed!");
    let b: i32 = match input.trim().parse() {
        Err(_) => panic!("Invalid number entered!"),
        Ok(num) => num,
    };

    if a == b {
        println!("{} equals {}", a, b);
    } else if a < b {
        println!("{} is less than {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    }
}
