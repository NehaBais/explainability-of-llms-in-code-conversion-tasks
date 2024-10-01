use std::cmp;

fn main() {
    // Case-sensitive comparisons
    let a = if let Some(a) = std::env::args().nth(1) {
        a
    } else {
        String::from("1.2.Foo")
    };

    let b = if let Some(b) = std::env::args().nth(2) {
        b
    } else {
        String::from("1.3.Bar")
    };

    println!(
        "{:?} and {:?} are {}equal.",
        a,
        b,
        if a == b { "" } else { "not " }
    );
    println!(
        "{:?} and {:?} are {}inequal.",
        a,
        b,
        if a != b { "" } else { "not " }
    );

    let result = cmp::partial_cmp(&a, &b);
    match result {
        Some(result) => {
            println!(
                "{:?} is {}ordered before {:?}.",
                a,
                if result == std::cmp::Ordering::Less {
                    ""
                } else {
                    "not "
                },
                b
            );
            println!(
                "{:?} is {}ordered after {:?}.",
                a,
                if result == std::cmp::Ordering::Greater {
                    ""
                } else {
                    "not "
                },
                b
            );
        }
        None => println!("{:?} and {:?} are not comparable.", a, b),
    };

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lower = a.to_ascii_lowercase();
    let b_lower = b.to_ascii_lowercase();
    println!(
        "{:?} and {:?} are {}equal.",
        a_lower,
        b_lower,
        if a_lower == b_lower { "" } else { "not " }
    );
    println!(
        "{:?} and {:?} are {}inequal.",
        a_lower,
        b_lower,
        if a_lower != b_lower { "" } else { "not " }
    );

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant  operator is defined.
    let numA: f64 = a.parse().unwrap();
    let numB: f64 = b.parse().unwrap();
    println!(
        "{:.2} and {:.2} are {}equal.",
        numA,
        numB,
        if numA == numB { "" } else { "not " }
    );
    println!(
        "{:.2} and {:.2} are {}inequal.",
        numA,
        numB,
        if numA != numB { "" } else { "not " }
    );
}
