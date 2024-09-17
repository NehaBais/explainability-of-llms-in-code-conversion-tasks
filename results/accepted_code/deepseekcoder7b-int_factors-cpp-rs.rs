use std::vec::Vec;

fn generate_factors(n: usize) -> Vec<usize> {
    let mut factors = vec![1, n];
    for i in 2..=((n as f64).sqrt() as usize) {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }
    factors.sort();
    return factors;
}

fn main() {
    let sample_numbers = vec![3135, 45, 60, 81];
    for number in &sample_numbers {
        let factors = generate_factors(*number);
        println!("Factors of {:4} are: {:?}", number, factors);
    }
}
