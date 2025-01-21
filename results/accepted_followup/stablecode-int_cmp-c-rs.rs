use std::io;

fn main() 
{
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a)).expect("Failed to read line");
    io::stdin().read_line(&mut b))).expect("Failed to read line");

    let a: i32 = match a.trim().parse() 
    {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer for 'a'."),
    };

    let b: i32