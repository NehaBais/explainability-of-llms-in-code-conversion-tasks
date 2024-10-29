fn print_logic(a: bool, b: bool) {
    println!("{}", a);
    println!("and");
    println!("{}{}", a && b);

    println!("{}", a);
    println!("or");
    println!("{}{}", a || b);

    println!("{}", a);
    println!("not");
    println!("{}{}", !a);
}
