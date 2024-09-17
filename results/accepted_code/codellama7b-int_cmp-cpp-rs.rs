use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    if !(io::stdin().read_line(&mut a).is_ok() && io::stdin().read_line(&mut b).is_ok()) {
        println!("could not read the numbers");
        return;
    }

    let a: i32 = a.trim().parse().expect("failed to parse number");
    let b: i32 = b.trim().parse().expect("failed to parse number");

    // test for less-than
    if a < b {
        println!("{} is less than {}", a, b);
    }

    // test for equality
    if a == b {
        println!("{} is equal to {}", a, b);
    }

    // test for greater-than
    if a > b {
        println!("{} is greater than {}", a, b);
    }
}
