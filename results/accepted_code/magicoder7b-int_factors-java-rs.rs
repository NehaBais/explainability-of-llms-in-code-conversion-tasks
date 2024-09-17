use std::collections::HashSet;

fn factors(n: i64) -> HashSet<i64> {
    let mut factors = HashSet::new();
    factors.insert(n);
    factors.insert(1);
    for test in (2..n).step_by(-1) {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
