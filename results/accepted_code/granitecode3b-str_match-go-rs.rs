use std::fmt;
fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {}",
        first,
        second,
        first.starts_with(second)
    );

    let i = first.find(second);
    println!("2. {} contains {}: {},", first, second, i.is_some());

    if let Some(i) = i {
        println!("2.1. at location {}", i);
        for start in (i + 1).. {
            if let Some(i) = first[start..].find(second) {
                println!("2.2. at location {}", start + i);
            } else {
                break;
            }
        }
        println!("2.2. and that's all");
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
