fn main() {
    let mut n1 = String::new();
    println!("Enter first integer:");
    std::io::stdin().read_line(&mut n1).unwrap();
    let n1: i32 = n1.trim().parse().unwrap();
    let mut n2 = String::new();
    println!("Enter second integer:");
    std::io::stdin().read_line(&mut n2).unwrap();
    let n2: i32 = n2.trim().parse().unwrap();
    match (n1 < n2, n1 == n2, n1 > n2) {
        (true, false, false) => println!("{} is less than {}", n1, n2),
        (false, true, false) => println!("{} is equal to {}", n1, n2),
        (false, false, true) => println!("{} is greater than {}", n1, n2),
        _ => unreachable!(),
    }
}
