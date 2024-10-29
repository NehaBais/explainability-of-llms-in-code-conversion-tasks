fn main() {
    let mut s = String::from("World");
    let prefix = "Hello, ";
    s.insert_str(0, prefix);

    println!("{}", &s);
}
