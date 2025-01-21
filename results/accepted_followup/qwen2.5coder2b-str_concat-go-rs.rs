fn main() {
    let s: &str = "hello";

    println!("{}", s);

    let s2: &str = format!("{} {}", s, "literal");

    println!("{}", s2);
}
