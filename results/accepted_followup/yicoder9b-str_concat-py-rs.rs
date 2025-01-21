fn main() {
    // Create a string variable equal to any text value.
    let mut s1 = String::from("hello");
    println!("{} world", s1);

    // Create another string variable whose value is the original variable concatenated with
    //another string literal.
    let mut s2: String = format!("{} world", s1);
    println!("{}", s2);

    s1 = String::from("hello");
    let s: Vec<String> = [&s1, "world", "mom"].iter().map(|x| x.to_string()).collect();
    println!("{}", s.join(", "));

    let mut s2: String = [&s1, "world", "mom"].iter().map(|x| x.to_string()).collect::<Vec<String>>().join(", ");
    println!("{}", s2);
}