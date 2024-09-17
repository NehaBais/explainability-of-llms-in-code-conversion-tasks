use std::collections::BTreeSet;
pub fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);
    for test in (0..(n as f64).sqrt().floor() as u64 + 1).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    factors
}
