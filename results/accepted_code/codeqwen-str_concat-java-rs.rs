fn main() {
    let mut s = String::from("hello");
    s.push_str(" literal");
    println!("{}", s);

    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
