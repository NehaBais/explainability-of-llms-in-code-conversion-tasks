fn main() {
    let a = "ball".to_string();
    let b = "bell".to_string();
    compare(&a, &b);
    ignorecase_compare(&a, &b);
}

// Comparing two strings for exact equality
fn compare(a: &String, b: &String) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        a <= b
    );
}

// Comparing two strings for case insensitive equality
fn ignorecase_compare(a: &String, b: &String) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a.to_lowercase() == b.to_lowercase(), // Equal?
        a.to_lowercase() != b.to_lowercase(), // Not equal?
        a.to_lowercase() > b.to_lowercase(),  // Greater than?
        a.to_lowercase() < b.to_lowercase(),  // Lesser than?
        a.to_lowercase() >= b.to_lowercase(), // Greater or equal to?
        a.to_lowercase() <= b.to_lowercase()  // Lesser or equal to?
    );
}
