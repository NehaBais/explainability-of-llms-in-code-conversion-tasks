use std::collections::BTreeSet;

pub fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1u64);

    for test in (1..=((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    factors
}
