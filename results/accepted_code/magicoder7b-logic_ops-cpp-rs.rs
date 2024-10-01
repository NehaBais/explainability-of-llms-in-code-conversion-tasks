fn print_logic(a: bool, b: bool) {
    println!("{:?}", a && b); // so that bools are written as "true" and "false"
    println!("{}", format!("a and b is {}", a && b));

    println!("{:?}", a || b);
    println!("{}", format!("a or b is {}", a || b));

    println!("not a is {}", !a);
}
