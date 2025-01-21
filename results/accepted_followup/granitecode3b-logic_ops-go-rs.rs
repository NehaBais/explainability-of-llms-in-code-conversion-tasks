fn main() -> Result<(), std::io::Error> {
    print_logic(true, false);
    Ok(())
}

fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
