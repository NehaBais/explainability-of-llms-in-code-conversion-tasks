use std::fmt::Write;

fn main() {
    let mut s = String::new();
    writeln!(s, "{} literal", "hello").unwrap();
    println!("{}", s);

    let s2 = format!("{}{}", "hello", " literal");
    println!("{}", s2);
}
