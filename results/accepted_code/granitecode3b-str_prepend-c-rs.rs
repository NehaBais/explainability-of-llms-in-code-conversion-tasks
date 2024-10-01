fn main() {
    let str = "my String".to_string();
    let cstr = "Changed ".to_string();
    let dup = format!("{}{}", cstr, str);
    println!("{}", dup);
}
