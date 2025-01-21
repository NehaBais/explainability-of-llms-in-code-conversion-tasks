fn match_strings(first: &str, second: &str) {
    println!("1. {}", first.starts_with(second));
    let index = first.find(second);
    if let Some(index) = index {
        println!("2. The string {} contains the string {}, located at position {}.", 
            first, second, index);
        for start in index..=first.len() - 1 {
            if let Some(subindex) = first[start..].find(second) {
                println!("2.1. and the sub-string '{}' is found at position {} in '{}'.", 
                    second, start + subindex, first);
            }
        }
    } else {
        println!("2. The string {} does not contain the string {}.", 
            first, second);
    }
    println!("3. {}", first.ends_with(second));
}

fn main() {
    match_strings("abracadabra", "abr");
}