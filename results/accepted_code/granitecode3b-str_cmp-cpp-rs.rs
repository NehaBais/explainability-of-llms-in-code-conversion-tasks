use std::cmp::Ordering;
fn main() {
    // Case-sensitive comparisons.
    let a = if std::env::args().len() >= 2 {
        std::env::args().nth(1).unwrap()
    } else {
        "1.2.Foo".to_string()
    };
    let b = if std::env::args().len() >= 3 {
        std::env::args().nth(2).unwrap()
    } else {
        "1.3.Bar".to_string()
    };
    println!(
        "{} and {} are {}exactly equal.",
        a,
        b,
        if a == b { "" } else { "not " }
    );
    println!(
        "{} and {} are {}inequal.",
        a,
        b,
        if a != b { "" } else { "not " }
    );
    println!(
        "{} is {}ordered before {}.",
        a,
        if a < b { "" } else { "not " },
        b
    );
    println!(
        "{} is {}ordered after {}.",
        a,
        if a > b { "" } else { "not " },
        b
    );

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = a.to_lowercase();
    let b = b.to_lowercase();
    println!(
        "{} and {} are {}exactly equal.",
        a,
        b,
        if a == b { "" } else { "not " }
    );
    println!(
        "{} and {} are {}inequal.",
        a,
        b,
        if a != b { "" } else { "not " }
    );
    println!(
        "{} is {}ordered before {}.",
        a,
        if a < b { "" } else { "not " },
        b
    );
    println!(
        "{} is {}ordered after {}.",
        a,
        if a > b { "" } else { "not " },
        b
    );

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    let num_a = std::env::args().nth(3).unwrap_or("1.2".to_string());
    let num_b = std::env::args().nth(4).unwrap_or("1.3".to_string());
    println!(
        "{} and {} are {}exactly equal.",
        num_a,
        num_b,
        if num_a == num_b { "" } else { "not " }
    );
    println!(
        "{} and {} are {}inequal.",
        num_a,
        num_b,
        if num_a != num_b { "" } else { "not " }
    );
    println!(
        "{} is {}ordered before {}.",
        num_a,
        if a < b { "" } else { "not " },
        b
    );
    println!(
        "{} is {}ordered after {}.",
        num_a,
        if a > b { "" } else { "not " },
        b
    );

    // Other kinds of string comparisons that the language provides:
    let longer = "hello";
    let shorter = "helo";
    println!(
        "{} and {} are {}lexically equal.",
        longer,
        shorter,
        if longer == shorter { "" } else { "not " }
    );
    println!(
        "{} and {} are {}lexically greater than.",
        longer,
        shorter,
        if longer > shorter { "" } else { "not " }
    );
    println!(
        "{} and {} are {}lexically less than.",
        longer,
        shorter,
        if longer < shorter { "" } else { "not " }
    );

    // Ordering strings.
    let string_a = String::from("hello");
    let string_b = String::from("world");
    match string_a.cmp(&string_b) {
        Ordering::Equal => println!("{} and {} are equal.", string_a, string_b),
        Ordering::Less => println!("{} is less than {}", string_a, string_b),
        Ordering::Greater => println!("{} is greater than {}", string_a, string_b),
    }
}
