use std::collections::HashSet;

fn factors(n: u64) -> HashSet<u64> {
    let mut factors = HashSet::new();
    if n == 1 {
        return factors;
    }
    factors.insert(n);
    for test in (2..=((n as f64).sqrt() as u64)) {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    factors
}

fn main() {
    let number = 18;
    let result = factors(number);
    println!("Factors of {}: {:?}", number, result);
}