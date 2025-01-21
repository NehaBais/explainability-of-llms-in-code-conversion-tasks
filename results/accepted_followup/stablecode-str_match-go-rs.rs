fn match_strings(first: &str, second: &str) {
    println!("1. {} starts with {}: {}", first, second, first.starts_with(second)));

    if let Some(index) = first.find(second) {
        println!("2. {} contains {} at any location: {}", first, second, index > 0);
        if index > 0 {
            println!("2.1. at location {}", index + 1));
            let mut start = index + 1;
            while let Some(i) = first[start..].find(second) {
                println!("2.2. at location {}", start + i + 1));
                start += i + 1;
            }
            println!("2.2. and that's all"));
        }
    }

    println!("3. {} ends with {}: {}", first, second, first.ends_with(second)));
}