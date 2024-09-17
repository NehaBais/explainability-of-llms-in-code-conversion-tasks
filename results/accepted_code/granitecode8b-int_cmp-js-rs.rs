fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter first integer:");
    std::io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let a: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    println!("Enter second integer:");
    std::io::stdin()
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
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} equals {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
