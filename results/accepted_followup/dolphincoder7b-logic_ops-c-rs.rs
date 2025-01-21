fn main() {
    print_logic(1, 0); // Replace the arguments with actual values if needed
}

fn print_logic(a: i32, b: i32) {
    println!("a and b is  {}", a && b);
    println!("a or b is  {}", a || b);
    println!("not a is  {}", !a);
}
