fn demo_compare<T>(a: &str, b: &str, semantically: &str)
where
    T: std::cmp::Ord + std::fmt::Display + 'static,
{
    println!(
        "{} and {} are exactly {} equal.",
        a,
        b,
        if a == b { "" } else { "not " }
    );
    println!(
        "{} and {} are exactly {}inequal.",
        a,
        b,
        if a != b { "" } else { "not " }
    );
    println!(
        "{} is {}lexically ordered before {}.",
        a,
        if a < b { "" } else { "not " },
        b
    );
    println!(
        "{} is {}lexically ordered after {}.",
        a,
        if a > b { "" } else { "not " },
        b
    );
}

fn main() {
    // Case-sensitive comparisons.
    let a = (if std::env::args().len() > 1 {
        &std::env::args()[1]
    } else {
        "1.2.Foo"
    });
    let b = (if std::env::args().len() > 2 {
        &std::env::args()[2]
    } else {
        "1.3.Bar"
    });
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = if let ok(_) = a.chars().fold(Vec::new(), |mut acc, c| {
        acc.push((c as u32).to_ascii_lowercase());
        return Ok(true);
    }) {
        _
    } else {
        unreachable!("unable to convert string to vector of chars")
    };
    let b = if let ok(_) = b.chars().fold(Vec::new(), |mut acc, c| {
        acc.push((c as u32).to_ascii_lowercase());
        return Ok(true);
    }) {
        _
    } else {
        unreachable!("unable to convert string to vector of chars")
    };
    demo_compare(&a, &b, "lexically");

    // Numeric comparisons. Here `f64` could be any type for which the relevant >> operator is defined, eg i32, u32, etc.
    let num_a: f64;
    let num_b: f64;
    if let Ok(v) = num_a.try_from_str(&a) {
        num_b = if let Ok(v) = num_b.try_from_str(&b) {
            v
        } else {
            panic!()
        };
    } else {
        unreachable!("unable to convert string to float")
    };
    demo_compare(&num_a, &num_b, "numerically");
}
