fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1];
    if n == 1 {
        return factors;
    }
    for i in (2..=((n as f64).sqrt() as usize)) {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }
    factors.sort();
    factors
}

fn main() {
    let sample_numbers: [i32; 4] = [3135, 45, 60, 81];
    for &n in sample_numbers.iter() {
        let factors = generate_factors(n);
        println!("Factors of {}: {:?}", n, factors);
    }
}
