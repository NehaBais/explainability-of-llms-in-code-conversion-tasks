fn print_logic(A: bool, b: bool) {
    println!("A and b is {}", A && b);
    println!("A or b is {}", A || b);
    println!("not a is {}", !A);
}

fn main() {
    print_logic(true, false);
}
