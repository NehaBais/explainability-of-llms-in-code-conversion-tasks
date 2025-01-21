fn main() {
    logic(true, false); // Example call to the logic function
}

fn logic(a: bool, b: bool) {
    println!("a AND b:  {}", (a && b));
    println!("a OR b:  {}", (a || b));
    println!("NOT a:  {}", !a);
}
