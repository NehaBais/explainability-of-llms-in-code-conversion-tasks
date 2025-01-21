fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    // Append the strings using Rust's built-in methods
    str.push_str(cstr);
    str.push_str(cstr2);

    println!("{}", str);
}