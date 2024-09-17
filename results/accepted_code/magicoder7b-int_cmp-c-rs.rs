use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let nums: Vec<i32> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = nums[0];
    let b = nums[1];

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
