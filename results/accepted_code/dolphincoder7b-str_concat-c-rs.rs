fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::new();
    s0.push_str(&s1[..]);
    s0.push_str(&s2[..]);
    return s0;
}

fn main() {
    let s = "hello";
    println!("{:?}-literal", s);
    // or
    println!("{}-literal", s);

    let mut s2 = String::new();
    s2.push_str(s);
    s2.push_str(" literal");
    println!("{}", s2);
}
