fn main() {
    let first = String::from("abracadabra");
    let second = String::from("abr");

    match_strings(&first, &second);
}

fn match_strings(first: &str, second: &str) {
    println!(
        "1. {} starts with {}: {}",
        first,
        second,
        first.starts_with(second)
    );

    if let Some(i) = first.find(second) {
        println!(
            "2. {} contains {} at location {}: {}",
            first, second, i, true
        );

        for start in (i + 1..first.len()).step_by(1) {
            if let Some(j) = first[start..].find(second) {
                println!("2.2. at location {}: {}", j + start, true);
            }
        }

        println!("2.2. and that's all");
    } else {
        println!("2. {} contains {} at location: {}", first, second, false);
    }

    println!(
        "3. {} ends with {}: {}",
        first,
        second,
        first.ends_with(second)
    );
}
