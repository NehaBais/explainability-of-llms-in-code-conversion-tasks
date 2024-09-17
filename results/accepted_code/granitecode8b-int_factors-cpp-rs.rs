fn generate_factors(n: i32) -> Vec {
    let mut factors = vec![1, n];
    for i in (2..=(n as f64).sqrt().floor() as i32).step_by(1) {
        if n % i == 0 {
            factors.push(i);
            if (i * i) != n {
                factors.push(n / i);
            }
        }
    }
    factors.sort();
    factors
}
fn main() {
    let sample_numbers = vec![3135, 45, 60, 81];
    for &num in &sample_numbers {
        let factors = generate_factors(num);
        println!("Factors of {} are: {:?}", num, factors);
    }
}
