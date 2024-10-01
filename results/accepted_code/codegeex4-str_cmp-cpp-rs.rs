use std::str::FromStr;

fn main() {
    // Case-sensitive comparisons.
    let a = String::from("1.2.Foo");
    let b = String::from("1.3.Bar");
    demo_compare(&a, &b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a_lower: String = a.to_lowercase();
    let b_lower: String = b.to_lowercase();
    demo_compare(&a_lower, &b_lower, "lexically");

    // Numeric comparisons; here 'f64' could be any type for which the
    // relevant FromStr trait is defined, eg i32, i64, etc.
    let num_a: f64 = match a.parse::<f64>() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid number"),
    };

    let num_b: f64 = match b.parse::<f64>() {
        Ok(num) => num,
        Err(_) => panic!("Not a valid number"),
    };
    demo_compare(&num_a.to_string(), &num_b.to_string(), "numerically");
}

fn demo_compare<T: std::cmp::PartialEq + std::fmt::Display>(a: &T, b: &T, semantically: &str) {
    println!(
        "{} and {} are {}exactly {} equal.",
        a,
        b,
        if *a != *b { "not " } else { "" },
        semantically
    );

    println!(
        "{} and {} are {}{}inequal.",
        a,
        b,
        if *a == *b { "not " } else { "" },
        semantically
    );

    println!(
        "{} is {} ordered before {}.",
        a,
        if *a < *b { "" } else { "not " },
        b
    );

    println!(
        "{} is {} ordered after {}.",
        a,
        if *a > *b { "" } else { "not " },
        b
    );
}
