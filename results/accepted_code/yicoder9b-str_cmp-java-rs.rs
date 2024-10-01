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

    if a.to_lowercase() == b.to_lowercase() {
        println!("'{}' and '{}' are case-insensitive lexically equal.", a, b);
    } else {
        println!(
            "'{}' and '{}' are not case-insensitive lexically equal.",
            a, b
        );
    }

    match a.cmp(b) {
        std::cmp::Ordering::Less => println!("'{}' is lexically before '{}'.", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is lexically after '{}'.", a, b),
        _ => (),
    }
    match a.cmp(b) {
        std::cmp::Ordering::Less => println!("'{}' is not lexically before '{}'.", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is not lexically after '{}'.", a, b),
        _ => (),
    }

    println!("The lexical relationship is: {:?}", a.cmp(b));
    println!(
        "The case-insensitive lexical relationship is: {:?}\n",
        a.to_lowercase().cmp(&b.to_lowercase())
    );
}
