fn concat_strings(s1: &str, s2: &str) -> String {
    let mut combined = String::new();
    combined.push_str(s1);
    combined.push_str(" literal");
    combined.push_str(s2);
    combined
}

fn main() {
    let s: &str = "hello";

    println!("{} literal", s);

    // or

    println!("{} literal", s);

    let s2 = concat_strings(s, " literal");

    println!("The combined string is: {}", s2);

    // Don't forget to free the memory allocated for s2
}
