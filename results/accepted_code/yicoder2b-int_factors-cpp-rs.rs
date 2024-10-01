fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    for i in 2..=(n as f64).sqrt() as i32 {
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
    let mut sample_numbers = vec![3135, 45, 60, 81];

    for number in &mut sample_numbers {
        let mut factors = generate_factors(*number);
        println!("Factors of {} are: {:?}", *number, factors);
    }
}
