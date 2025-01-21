fn compare(a: &str, b: &str) {
    let a_type = std::any::type_name::<i32>(a);
    let b_type = std::any::type_name::<i32>(b);

    println!(
        "{} is of type {} and  {} is of type {}",
        a, a_type, b, b_type
    );

    if a < b {
        println!("{} < {}", a, b);
    } else if a > b {
        println!("{} > {}", a, b);
    } else {
        println!("{} == {}", a, b);
    }
}
