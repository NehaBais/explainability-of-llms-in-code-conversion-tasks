fn main() {
    let mut input = String::new();
    println!("Enter a number:");
    std::io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().expect("Invalid input");
    if n < 0 {
        println!("Number must be positive!");
        return;
    }
    println!("Factors of {} are:", n);
    for i in (1..=n).rev() {
        if n % i == 0 {
            println!("{}", i);
        }
    }
}
