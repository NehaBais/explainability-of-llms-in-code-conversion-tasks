fn main() {
    // Case-sensitive comparisons.
    let a = std::env::args().nth(1).unwrap_or("1.2.Foo".to_string());
    let b = std::env::args().nth(2).unwrap_or("1.3.Bar".to_string());
    println!(
        "{} and {} are {}equal.",
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
        "{} is {}ordered before {}",
        a,
        if a < b { "" } else { "not " },
        b
    );
    println!(
        "{} is {}ordered after {}",
        a,
        if a > b { "" } else { "not " },
        b
    );

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lower = a.to_lowercase();
    let b_lower = b.to_lowercase();
    println!(
        "{} and {} are {}equal.",
        a,
        b,
        if a_lower == b_lower { "" } else { "not " }
    );
    println!(
        "{} and {} are {}inequal.",
        a,
        b,
        if a_lower != b_lower { "" } else { "not " }
    );
    println!(
        "{} is {}ordered before {}",
        a,
        if a_lower < b_lower { "" } else { "not " },
        b
    );
    println!(
        "{} is {}ordered after {}",
        a,
        if a_lower > b_lower { "" } else { "not " },
        b
    );

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    let numA: f64 = a.parse().unwrap();
    let numB: f64 = b.parse().unwrap();
    println!(
        "{} and {} are {}equal.",
        numA,
        numB,
        if numA == numB { "" } else { "not " }
    );
    println!(
        "{} and {} are {}inequal.",
        numA,
        numB,
        if numA != numB { "" } else { "not " }
    );
    println!(
        "{} is {}ordered before {}",
        numA,
        if numA < numB { "" } else { "not " },
        numB
    );
    println!(
        "{} is {}ordered after {}",
        numA,
        if numA > numB { "" } else { "not " },
        numB
    );
}
