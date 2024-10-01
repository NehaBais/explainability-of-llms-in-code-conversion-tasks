fn main() {
    let mut str = String::from("my String"));
    let cstr = "Changed ";

    // Prepend the string with another string literal
    str = format!("{}{}", cstr, str));

    println!("{}", str));
}