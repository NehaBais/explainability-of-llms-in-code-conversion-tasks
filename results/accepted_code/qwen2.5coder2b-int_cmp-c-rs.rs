fn main() {
    // Get two integers from the user
    let mut a = input("Enter the first integer: ");
    let mut b = input("Enter the second integer: ");

    // Convert inputs to integers
    a = a.parse::<i32>().unwrap();
    b = b.parse::<i32>().unwrap();

    // Display message based on comparison
    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}

fn input(prompt: &str) -> String {
    print!("{}", prompt);
    std::io::stdout().flush().unwrap();
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    input.trim_end().to_string()
}