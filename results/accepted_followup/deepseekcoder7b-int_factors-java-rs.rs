use std::cmp::Ordering;

fn factors(n: u64) -> Vec<u64> {
    let mut factors = vec![1, n];
    for test in (2..=((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.push(test);
            factors.push(n / test);
        }
    }
    factors.sort_unstable();
    factors
}
