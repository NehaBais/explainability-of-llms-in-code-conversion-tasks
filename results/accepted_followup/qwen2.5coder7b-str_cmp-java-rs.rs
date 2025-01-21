fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(a: &str, b: &str) {
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not lexically equal.", a, b);
    }

    let case_insensitive = a.to_lowercase() == b.to_lowercase();
    if case_insensitive {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            a, b
        );
    }

    let result = a.cmp(b);
    match result {
        std::cmp::Ordering::Less => println!("'{}' is lexically before '{}'.", a, b),
        std::cmp::Ordering::Equal => println!("'{}' and '{}' are lexically equal.", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is lexically after '{}'.", a, b),
    }

    let case_insensitive_result = a.to_lowercase().cmp(b.to_lowercase());
    match case_insensitive_result {
        std::cmp::Ordering::Less => println!("'{}' is case-insensitively before '{}'.", a, b),
        std::cmp::Ordering::Equal => println!("'{}' and '{}' are case-insensitively equal.", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is case-insensitively after '{}'.", a, b),
    }

    let lex_relationship = format!("{}", result);
    println!("The lexical relationship is: {}", lex_relationship);

    let ci_lex_relationship = format!("{}", case_insensitive_result);
    println!(
        "The case-insensitive lexical relationship is: {}",
        ci_lex_relationship
    );
}
