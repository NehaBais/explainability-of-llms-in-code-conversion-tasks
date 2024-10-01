fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {}",
        first,
        second,
        first.starts_with(second)
    );
    if let Some(i) = first.find(second) {
        println!("2. {} contains {}: true, at location {}", first, second, i);
        let mut start = i + second.len();
        loop {
            if let Some(i) = first[start..].find(second) {
                println!("2.1. at location {}", start + i);
                start += i + second.len();
            } else {
                break;
            }
        }
        println!("2.2. and that's all");
    } else {
        println!("2. {} contains {}: false", first, second);
    }
    println!(
        "3. {} ends with {}: {}",
        first,
        second,
        first.ends_with(second)
    );
}

fn main() {
    match_strings("abracadabra", "abr");
}
