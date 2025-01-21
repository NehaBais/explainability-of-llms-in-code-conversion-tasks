fn main() {
    logic(true, false); // Call to 'logic' function with sample inputs 
}

fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}