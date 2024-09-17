use std::collections::HashSet;

fn factors(n: i64) -> HashSet<i64> {
    let mut factors = n.to_string().parse::<i64>().unwrap()().into_iter().collect::<HashSet<i64>>>();
    factors.insert(1);
    factors.insert(n);

    for test in ((n as f64).sqrt() as i64)..=((n as f64).sqrt() as i64).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}