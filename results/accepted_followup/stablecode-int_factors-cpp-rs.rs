fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    for i in 2..(((n as f64).sqrt()) as i32 + 1)) {
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