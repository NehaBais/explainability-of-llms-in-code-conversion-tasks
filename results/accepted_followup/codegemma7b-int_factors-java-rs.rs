use std::collections::TreeSet;

fn factors(n: u64) -> TreeSet<u64> {
    let mut factors = TreeSet::new();
    factors.insert(n);
    factors.insert(1);
    for test in (n - 1..=n.sqrt() as f64).rev() {
        if n % test as u64 == 0 {
            factors.insert(test as u64);
            factors.insert(n / test as u64);
        }
    }
    factors
}
