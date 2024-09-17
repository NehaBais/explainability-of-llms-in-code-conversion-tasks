fn factors(mut n: u64) -> Vec<u64> {
    let mut result = vec![n];
    if n > 1 {
        result.push(1);
    }
    for test in (0..(n as f64).sqrt().floor() as u64).rev() {
        if n % test == 0 {
            result.push(test);
            result.push(n / test);
        }
    }
    result.sort();
    result.dedup();
    result
}
