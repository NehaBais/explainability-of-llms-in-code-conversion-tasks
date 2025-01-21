use std::collections::HashSet;

fn factors(n: i64) -> HashSet<i64> {
    let mut factors = HashSet::new();
    factors.insert(1);

    let sqrt_n = (n as f64).sqrt() as i64;

    for test in 2..=sqrt_n {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
