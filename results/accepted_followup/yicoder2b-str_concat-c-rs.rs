fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::from(s1);
    s0.push(' '); // add a space for the separator
    s0.extend_from_static(&s2 as [char]);
    return s0;
}

fn main() {
    let s: &str = "hello";
    let mut s2: String = s.to_string();

    println!("{} literal", s);
    /* or */
    println!("{} {} literal", s, "literal");

    s2 = sconcat(&s, " literal").to_string();
    println!("{}", s2);
}