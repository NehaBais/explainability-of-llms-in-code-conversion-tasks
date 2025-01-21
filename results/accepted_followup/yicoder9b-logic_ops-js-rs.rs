fn main() {
    logic(true, false);  // replace true and false with your actual values
}

fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}