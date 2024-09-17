use std::io;

fn main() {
    let mut a = String::new();
    io::stdin().read_line(&mut a).unwrap();
    let a: i32 = a.trim().parse().expect("Please type a number!");

    let mut b = String::new();
    io::stdin().read_line(&mut b).unwrap();
    let b: i32 = b.trim().parse().expect("Please type a number!");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} is equal to {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    }
}
