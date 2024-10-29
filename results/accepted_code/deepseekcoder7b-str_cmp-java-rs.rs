fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(a: &str, b: &str) {
    // Checking exact equality and inequality for strings.
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not lexically equal.", a, b);
    }

    // Lexical comparison
    if a.cmp(b) == std::cmp::Ordering::Less {
        println!("'{}' is lexically before  '{}'", a, b);
    } else if a.cmp(b) == std::cmp::Ordering::Greater {
        println!("'{}' is lexically after '{}'", a, b);
    }

    // Lexical comparison without considering case sensitivity
    let lower_a: String = a.chars().map(|c| c.to_ascii_lowercase()).collect();
    let lower_b: String = b.chars().map(|c| c.to_ascii_lowercase()).collect();

    if &lower_a[..] == &lower_b[..] {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            a, b
        );
    }

    // Numeric string comparison
    let result = a.parse::<f64>();
    match result {
        Ok(number) => println!("Parsed successfully {}", number),
        Err(_err) => println!("Cannot parse to float: '{}'", a),
    }
}
