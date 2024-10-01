fn sconcat(s1: &str, s2: &str) -> String {
    let mut result = s1.to_string();
    result.push_str(s2);
    result
}

fn main() {
    let s = "hello";
    println!("{} literal", s);
    // or
    println!("{}{} literal", s, "");

    let s2 = sconcat(s, " literal");
    println!("{}", &s2);
}
