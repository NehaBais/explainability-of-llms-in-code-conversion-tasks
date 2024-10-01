// first solution created in rust using the official rust book.
fn main() {
    let s = "hello";
    println!("{}", s);
    println!("{}{}", s, " literal");
    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
