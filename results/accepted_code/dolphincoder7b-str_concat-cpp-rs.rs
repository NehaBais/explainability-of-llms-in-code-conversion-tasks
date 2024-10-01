use std::string::String;

fn main() {
    let mut s = String::from("hello");
    println!("{}", s);
    s.push_str(" literal");
    println!("{} literal", s);

    let mut s2 = s.clone();
    s2.push_str(" literal");
    println!("{}", s2);
}
