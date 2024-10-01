fn main() {
    let mut str = "my String".to_string();
    let cstr = "Changed ".to_string();
    str.insert(0, *cstr.chars().nth(0).unwrap());
    println!("{}", &*str);
}
