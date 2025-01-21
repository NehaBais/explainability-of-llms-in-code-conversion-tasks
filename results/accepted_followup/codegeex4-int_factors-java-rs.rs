use std::collections::BTreeSet;

pub fn factors(mut n: i64) -> BTreeSet<i64> {
    let mut factors = BTreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..((n as f64).sqrt() as i64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    factors
}

fn main() {
    let factors = factors(100);
    println!("{:?}", factors);
}
