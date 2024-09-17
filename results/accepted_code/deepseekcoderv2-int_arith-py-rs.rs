fn main() {
    let mut input_x = String::new();
    println!("Enter a number, please!");
    io::stdin()
        .read_line(&mut input_x)
        .expect("Failed to read line");

    let x: u64 = match input_x.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Sorry you have entered a wrong value!"),
    };

    println!("Your number is {}", x);
}
