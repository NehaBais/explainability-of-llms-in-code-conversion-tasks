fn main() {
    let a: i32;
    let b: i32;

    println!("Please enter two integers:");
    if std::io::stdin().read_line(&mut a.to_string()).is_err() {
        panic!("Failed to read line");
    }
    if std::io::stdin().read_line(&mut b.to_string()).is_err() {
        panic!("Failed to read line");
    }

    let a: i32 = a.trim().parse().expect("Invalid input for a");
    let b: i32 = b.trim().parse().expect("Invalid input for b");

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a > b {
        println!("{} is greater than {}", a, b);
    } else {
        println!("{} equals {}", a, b);
    }
}
