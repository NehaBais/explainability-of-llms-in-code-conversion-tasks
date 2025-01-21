fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {}",
        first, second, first.starts_with(second)
    );

    if let Some(index) = first.find(second) {
        println!("2. {} contains {}: true", first, second);
        println!("2.1. at location {}", index);
        
        // Handle multiple occurrences
        let mut start = index + 1;
        while let Some(next_index) = first[start..].find(second) {
            println!("2.2. at location {}", start + next_index);
            start += next_index + 1;
        }
        println!("2.2. and that's all");
    } else {
        println!("2. {} contains {}: false", first, second);
    }

    println!(
        "3. {} ends with {}: {}",
        first, second, first.ends_with(second)
    );
}

fn main() {
    match_strings("abracadabra", "abr");
}