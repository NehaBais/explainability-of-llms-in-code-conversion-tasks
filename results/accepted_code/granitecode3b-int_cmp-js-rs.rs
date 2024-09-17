fn main() {
    let mut a = 0;
    let mut b = 0;

    println!("Enter first integer:");
    std::io::stdin()
        .read_line(&mut a)
        .expect("Failed to read line");
    a = a.trim().parse::<i32>().unwrap();

    println!("Enter second integer:");
    std::io::stdin()
        .read_line(&mut b)
        .expect("Failed to read line");
    b = b.trim().parse::<i32>().unwrap();

    if a < b {
        println!("{} is less than {}", a, b);
    } else if a == b {
        println!("{} equals {}", a, b);
    } else {
        println!("{} is greater than {}", a, b);
    }
}
