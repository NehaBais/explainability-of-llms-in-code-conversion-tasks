fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::new();
    s0.push_str(s1);
    s0.push_str(s2);
    s0
}

fn main() {
    let s = "hello";
    let s2 = format!("{} literal", s);

    println!("{}", s);
    // or
    println!("{}{}", s, " literal");

    let s3 = sconcat(s, " literal");
    println!("{}", s3);
}
