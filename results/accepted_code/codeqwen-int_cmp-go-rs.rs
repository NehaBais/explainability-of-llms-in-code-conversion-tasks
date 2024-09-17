use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter number:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let n1: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    input.clear();
    println!("Enter number:");
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let n2: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    if n1 < n2 {
        println!("{} is less than {}", n1, n2);
    } else if n1 == n2 {
        println!("{} Is equal to {}", n1, n2);
    } else {
        println!("{} Is greater than {}", n1, n2);
    }
}
