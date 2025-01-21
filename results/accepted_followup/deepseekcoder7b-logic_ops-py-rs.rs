fn main() {
    logic(true, false);
}

fn logic(mut a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    a = !a;
    println!("not a: {}", a);
}
