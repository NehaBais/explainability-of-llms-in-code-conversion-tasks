fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {:?}\n",
        first,
        second,
        first.starts_with(second)
    );
    if let Some(i) = first.find(second) {
        println!("2. {} contains {} at location: {}\n", first, second, i);
        let count = first[i + 1..].matches(second).count();
        for _ in 0..count {
            if let Some(j) = &first[i + 1..].find(second) {
                println!(
                    "2. {} contains {} at location: {}\n",
                    first,
                    second,
                    i + j as usize + 1
                );
                i += j as usize + 1;
            } else {
                break;
            }
        }
    } else {
        println!("2. {} does not contain {}\n", first, second)
    }
    println!(
        "3. {} ends with {}: {:?}\n",
        first,
        second,
        first.ends_with(second)
    );
}

fn main() {
    match_strings("abracadabra", "abr");
}
