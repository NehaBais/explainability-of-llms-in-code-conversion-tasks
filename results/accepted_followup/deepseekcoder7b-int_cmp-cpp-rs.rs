use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter two integers separated by spaces:");

    match io::stdin().read_line(&mut input) {
        Ok(_n) => {
            let values: Vec<&str> = input.split_whitespace().collect();

            if let (Some(num1), Some(num2)) =
                (values[0].parse::<i32>().ok(), values[1].parse::<i32>().ok())
            {
                if num1 < num2 {
                    println!("{} is less than {}", num1, num2);
                } else if num1 == num2 {
                    println!("{} is equal to {}", num1, num2);
                } else {
                    println!("{} is greater than {}", num1, num2);
                }
            } else {
                eprintln!("Invalid input");
            }
        }

        Err(error) => eprintln!("Could not read the numbers: {}", error),
    };
}
