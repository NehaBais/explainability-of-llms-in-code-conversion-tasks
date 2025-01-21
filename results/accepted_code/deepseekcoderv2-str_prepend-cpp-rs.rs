fn main() {
    let my_strings = vec!["prepended to", "my string"];
    let mut concatenated: String = String::new();
    
    for s in my_strings {
        if !concatenated.is_empty() {
            concatenated.push_str(" ");
        }
        concatenated.push_str(s);
    }
    
    println!("{}", concatenated);
}