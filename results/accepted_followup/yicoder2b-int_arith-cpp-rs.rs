fn main() {
    let mut a = (match input("Enter first number:") { _ => return } ) as i32;
    let mut b = (match input("Enter second number:") { _ => return } ) as i32;

    println!("a+b = {}", &a + &b);
    println!("a-b = {}", &a - &b);
    println!("a*b = {}", a * b);
    if let result = &a / &b {
        println!("a/b = {}, remainder {}", result.to_string(), &result % b);
    } else {
        println!("Division by zero!") 
    };
}

fn input<T: std::ops::Add + FromStr>(msg: &str) -> Option<T> where T: std::clone::Clone + std::cmp::PartialOrd + std::fmt::Debug + FromStr, {
    let input = match read_line(std::process::stdout) { Some(s) => s.trim() };
    if let v = input.parse() {Some(v)} else {
        println!("{} is not a number!", input);
        None
    }
}