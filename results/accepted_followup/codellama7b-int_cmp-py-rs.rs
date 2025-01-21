fn main() {
    let mut a = String::new();
    println!("Enter value of a: ");
    io::stdin().read_line(&mut a).expect("Failed to read line");
    let mut b = String::new();
    println!("Enter value of b: ");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    if a.parse::<i32>().unwrap() < b.parse::<i32>().unwrap() {
        println!("a is less than b");
    } else if a.parse::<i32>().unwrap() > b.parse::<i32>().unwrap() {
        println!("a is greater than b");
    } else if a.parse::<i32>().unwrap() == b.parse::<i32>().unwrap() {
        println!("a is equal to b");
    }
}
