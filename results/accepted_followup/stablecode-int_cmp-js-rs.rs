use std::io;

fn main() 
{
    let mut input = String::new();

    println!("Please enter the first integer:");

    io::stdin().read_line(&mut input)).expect("Failed to read line");

    let a: i32 = match input.trim().parse() 
    {
        Ok(num) => num,
        Err(_) => panic!("Not a valid number"),
    };

    println!("Please enter the second integer:");

    io::stdin().read_line(&mut input)).expect("Failed to read line");

    let b: i32 
={
        match input.trim().parse() 
        {
            Ok(num) => num,
            Err(_) => panic!("Not a valid number"),
        }
    };

    println!("{}", compare(a, b)));
}

fn compare(a: i32, b: i32) -> &'static str 
{
    if a == b 
    {
        return "The first integer equals the second integer.";
    } else if a < b 
    {
        return "The first integer is less than the second integer.";
    } else 
    {
        return "The first integer is greater than the second integer.";
    }
}