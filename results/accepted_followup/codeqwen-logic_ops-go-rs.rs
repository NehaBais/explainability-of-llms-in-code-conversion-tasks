fn print_logic(A: bool, B: bool) {
    println!("A and B is {}", A && B);
    println!("A or B is {}", A || B);
    println!("not A is {}", !A);
}

fn main() {
    print_logic(true, false);
}
