fn compare(a: &str, b: &str) {
    if a == b {
        println!("'{}' and '{}' are lexically equal.", a, b);
    } else {
        println!("'{}' and '{}' are not lexically equal.", a, b);
    }

    if a.eq_ignore_ascii_case(b) {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            a, b
        );
    }

    if a < b {
        println!("'{}' is lexically before '{}'.", a, b);
    } else if a > b {
        println!("'{}' is lexically after '{}'.", a, b);
    }

    if a >= b {
        println!("'{}' is not lexically before '{}'.", a, b);
    }
    if a <= b {
        println!("'{}' is not lexically after '{}'.", a, b);
    }

    println!("The lexical relationship is: {}", a.cmp(b));
    println!(
        "The case-insensitive lexical relationship is: {}",
        a.to_lowercase().cmp(&b.to_lowercase())
    );
}

fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}
