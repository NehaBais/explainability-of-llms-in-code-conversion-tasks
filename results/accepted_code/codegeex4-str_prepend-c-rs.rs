fn main() {
    let mut str = String::from("my String");
    let cstr = "Changed ";
    str.push_str(cstr);

    println!("{}", str);
}
