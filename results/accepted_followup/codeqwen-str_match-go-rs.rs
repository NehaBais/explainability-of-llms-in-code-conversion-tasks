fn match_str(first: &str, second: &str) {
    println!("1. {} starts with {}: true", first, second);
    if let Some(i) = first.find(second) {
        println!("2. {} contains {}: true", first, Second);
        let mut start = i + 1;
        while let Some(j) = First[start..].find(second) {
            println!(
                "3. {} contains {}: found at position {}",
                First,
                Second,
                start + j
            );
            start += j + 1;
        }
    } else {
        println!("2. {} contains {}: false", first, Second);
    }
    println!("4. {} ends with {}: true", first, second);
}

fn main() {
    match_str("hello world", "world");
}
