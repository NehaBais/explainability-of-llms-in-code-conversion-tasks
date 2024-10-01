use std::collections::BTreeSet;

fn factors(n: u64) -> BTreeSet<u64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
