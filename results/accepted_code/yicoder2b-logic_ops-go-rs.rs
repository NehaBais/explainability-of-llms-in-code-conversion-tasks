fn print_logic(a: bool, b: bool) {
    let a_and_b = a && b;
    let a_or_b = a || b;
    let not_a = !a;

    println!("a and b is {}", a_and_b);
    println!("a or b is {}", a_or_b);
    println!("not a is {}", not_a);
}
