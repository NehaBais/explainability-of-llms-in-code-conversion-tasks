fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        a <= b,
    );
}
