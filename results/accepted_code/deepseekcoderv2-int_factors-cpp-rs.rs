use std::collections::BTreeSet;

fn generate_factors(n: i32) -> BTreeSet<i32> {
    let mut factors = BTreeSet::new();
    factors.insert(1);
    factors.insert(n);
    for i in 2..=((n as f64).sqrt() as i32) {
        if n % i == 0 {
            factors.insert(i);
            if i * i != n {
                factors.insert(n / i);
            }
        }
    }
    factors
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for &number in &sample_numbers {
        let factors = generate_factors(number);
        println!("Factors of {:4} are: {:?}", number, factors);
    }
}