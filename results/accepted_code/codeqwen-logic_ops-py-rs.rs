fn logic(A: bool, b: bool) {
    println!("A and b: {}", A && b);
    println!("A or b: {}", A || b);
    println!("not A: {}", !A);
}

fn main() {
    logic(true, false); // You can replace true and false with any boolean values you want.
}
