fn main() {
    let s = "hello";
    
    println!("{} literal\n", s);
    // or
    println!("{}\n", format!("{} literal", s));

    let s2 = concat_strings(s, " literal");
    println!("{}", s2);
}

fn concat_strings(s1: &str, s2: &str) -> String {
    let mut result = String::new();
    result.push_str(s1);
    result.push_str(s2);
    result
}