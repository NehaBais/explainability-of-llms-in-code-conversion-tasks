fn print_logic(mut a: bool, mut b: bool) {
    println!("{:?}", (a && b)); // so that bools are written as "true" and "false"
    println!("{:?}", (a || b));
    println!("{:?}", (!a));
}
