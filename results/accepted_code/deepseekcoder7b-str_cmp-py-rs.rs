fn compare<T: std::cmp::Ord>(a: &str, b: &str) {
    println!(
        "{} is of type {} and {} is of type {}",
        a,
        a.get_type(),
        b,
        b.get_type()
    );

    if a < b {
        println!("{} is strictly less than  {}", a, b)
    }
    if a <= b {
        println!("{} is less than or equal to {}", a, b)
    }
    if a > b {
        println!("{} is strictly greater than  {}", a, b)
    }
    if a >= b {
        println!("{} is greater than or equal to {}", a, b)
    }
    if a == b {
        println!("{} is equal to {}", a, b)
    }
    if a != b {
        println!("{} is not equal to {}", a, b)
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    // For non-string types of comparison we need to cast them into String then compare.
    compare(&String::from("24"), &String::from("123"));

    let a = Box::new(5.0);
    let b = Box::new(5);
    // For numeric types of comparison we need to convert them into string first then compare.
    compare(&a.to_string(), &b.to_string());
}
