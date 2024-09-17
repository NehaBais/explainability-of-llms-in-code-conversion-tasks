use std::cmp;

fn factor(n: u64) -> Vec<u64> {
    let mut factors = vec![];

    for x in 1..=cmp::min(n, u64::MAX as u64)) {
        if n % x == 0 {
            factors.push(x);
            factors.push(n / x));
        }
    }

    let mut factors_sorted = factors.clone();
    factors_sorted.sort();

    println!("{}: factors: {:?}", n, factors));
    println!("Sorted Factors: {:?}", factors_sorted));

    factors
}

fn main() {
    let numbers = vec![45, 53, 64];
    for i in &numbers {
        factor(i);
    }
}