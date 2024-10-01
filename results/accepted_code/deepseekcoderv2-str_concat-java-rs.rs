fn main() {
    let s = "hello";
    println!("{}", &s);

    let mut s2 = String::from(&s);
    s2.push_str(" literal");
    println!("{:?}", s2);
}
