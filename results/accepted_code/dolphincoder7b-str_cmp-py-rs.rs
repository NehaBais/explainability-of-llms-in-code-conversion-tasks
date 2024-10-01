fn compare(a: &str, b: &str) {
    let a_type = std::any::type_name::<i32>(a);
    let b_type = std::any::type_name::<i32>(b);

    println!(
        "{} is of type {} and {} is of type {}",
        a, a_type, b, b_type
    );

    if a < b {
        println!("{} is strictly less than   {}", a, b)
    }
    if a <= b {
        println!("{} is less than or equal to  {}", a, b)
    }
    if a > b {
        println!("{} is strictly greater than   {}", a, b)
    }
    if a >= b {
        println!("{} is greater than or equal to  {}", a, b)
    }
    if a == b {
        println!("{} is equal to  {}", a, b)
    }
    if a != b {
        println!("{} is not equal to  {}", a, b)
    }
}
