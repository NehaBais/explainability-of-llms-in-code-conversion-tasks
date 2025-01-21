fn print_logic(a: bool, b: bool) {
    println!("{} {} is {}", a, "and", a && b);
    println!("{} {} is {}", a, "or", a || b);
    println!("not of {} is {}", a, !a);
}
