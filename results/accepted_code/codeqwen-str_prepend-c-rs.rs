fn main() {
    let mut str = String::from("my String");
    let cstr = "Changed ";
    str.insert_str(0, cstr);
    println!("{}", str);
}
