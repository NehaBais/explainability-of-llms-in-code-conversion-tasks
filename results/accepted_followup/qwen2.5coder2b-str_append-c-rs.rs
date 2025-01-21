fn main() {
    let mut str: String = "Good Morning".to_string();
    let cstr: &str = " to all";
    let cstr2: &str = " !!!";

    // Append the string variable with another string literal in the most idiomatic way.
    str.push_str(cstr);
    str.push_str(cstr2);

    println!("{}", str);
}
