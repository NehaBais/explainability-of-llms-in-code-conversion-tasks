fn main() {
    let s1 = String::from("hello"); // Create a string variable equal to any text value.
    println!("{}", s1 + " world"); // Create another string variable whose value is the original variable concatenated with another string literal.
    print!(", ".join([s1, "world", "mom"]));
}
