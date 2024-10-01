use std::cmp::Ordering;

fn main() {
    let mut a = input("Enter first number:").unwrap();
    let mut b = input("Enter second number:").unwrap();

    println!("a+b = {}", &a + &b);
    println!("a-b = {}", &a - &b);
    println!("a*b = {}", a * b);
    if let result = &a / &b {
        println!("a/b = {}, remainder {}", result.to_string(), &result % b);
    } else {
        panic!("Division by zero!")
    };
}

fn input<T>(msg: &str) -> Option<T>
where
    T: std::ops::Add<Output = i32> + FromStr,
{
    let input = read_line().unwrap();
    if let v = input.trim().parse() {
        Some(v)
    } else {
        println!("{} is not a number!", input);
        None
    }
}
