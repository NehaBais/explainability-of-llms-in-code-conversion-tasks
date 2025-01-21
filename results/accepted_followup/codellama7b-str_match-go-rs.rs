use std::fmt;

fn main() {
    let first = "abracadabra";
    let second = "abr";

    println!(
        "1. {} starts with {}: {:?}",
        first,
        second,
        first.starts_with(second)
    );
    let i = first.find(second);
    if i >= Some(0) {
        // <-- fix: use `Some` to convert integer to Option<usize>
        println!("2. {} contains {}: {:?}, at location {}", first, second, i);
        for start in (i + 1).. {
            if let Some(i) = first[start..].find(second) {
                // <-- fix: use `Some` to convert integer to Option<usize>
                println!("2.2. at location {}", start + i);
                start += i + 1;
            } else {
                break;
            }
        }
        println!("2.2. and that's all");
    }
    println!(
        "3. {} ends with {}: {:?}",
        first,
        second,
        first.ends_with(second)
    );
}
