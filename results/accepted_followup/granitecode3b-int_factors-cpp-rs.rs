fn generate_factors(n: u32) -> Vec<i32> {
    let mut factors = vec![1, n as i32];

    for i in 2..=(n as f64).sqrt().ceil() as u32 {
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
