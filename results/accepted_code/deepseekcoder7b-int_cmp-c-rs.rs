use std::io;

fn main() {
    let mut input = String::new();

    println!("Please enter two integers separated by a space");

    match io::stdin().read_line(&mut input) {
        Ok(_n) => {
            let (a, b) = parse_input(input.as_str());

            if a < b {
                println!("{} is less than {}", a, b);
            }

            if a == b {
                println!("{} is equal to {}", a, b);
            }

            if a > b {
                println!("{} is greater than {}", a, b);
            }
        }
        Err(error) => println!("Error: {}", error),
    };
}

fn parse_input(s: &str) -> (i32, i32) {
    let mut numbers = s.split(' ').map(|n| n.parse::<i32>().unwrap());
    (numbers.next().unwrap(), numbers.next().unwrap())
}
