fn logic(A: bool, B: bool) {
    println!("A AND B: {}", A && B);
    println!("A OR B: {}", A || B);
    println!("NOT A: {}", !A);
}

fn main() {
    logic(true, false);
}
