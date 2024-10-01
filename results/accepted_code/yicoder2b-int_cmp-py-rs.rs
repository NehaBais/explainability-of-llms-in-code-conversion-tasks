fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("Enter value of a:");
    std::io::stdin()
        .read_line(&mut a)
        .expect("Failed to read line");

    println!("Enter value of b:");
    std::io::stdin()
        .read_line(&mut b)
        .expect("Failed to read line");

    let mut a = String::from(&a[0..]);
    let mut b = String::from(&b[0..]);

    if a.parse::<i32>().unwrap() < b.parse::<i32>().unwrap() {
        println!("a is less than b");
    } else if a.parse::<i32>().unwrap() > b.parse::<i32>().unwrap() {
        println!("a is greater than b");
    } else if a.parse::<i32>().unwrap() == b.parse::<i32>().unwrap() {
        println!("a is equal to b");
    }
}
