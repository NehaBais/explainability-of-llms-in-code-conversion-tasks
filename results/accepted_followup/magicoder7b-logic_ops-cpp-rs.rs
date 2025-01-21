fn print_logic(a: bool, b: bool) {
    println!("{}", format!("a and b is {}", a && b));
    println!("{}", format!("a or b is {}", a || b));
    println!("not a is {}", !a);
}

fn main() {
    print_logic(true, false);
}
