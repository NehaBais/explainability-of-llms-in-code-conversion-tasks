fn print_logic(a: bool, b: bool) {
    println!("{} and {} is {}", a, b, a && b);
    println!("{} or {} is {}", a, b, a || b);
    println!("not {} is {}", a, !a);
}
