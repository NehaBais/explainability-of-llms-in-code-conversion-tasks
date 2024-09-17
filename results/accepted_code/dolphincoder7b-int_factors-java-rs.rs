use std::collections::BTreeMap;

fn factors(n: i64) -> BTreeMap<i64, bool> {
    let mut factors = BTreeMap::<i64, bool>::new();

    for test in 1..=((n as f64).sqrt() as i64) {
        if n % test == 0 {
            factors.insert(test, true);
            factors.insert(-test, true); // For negative numbers
            factors.insert(n / test, true);
            factors.insert(-(n / test), true); // For negative numbers
        }
    }

    factors
}
