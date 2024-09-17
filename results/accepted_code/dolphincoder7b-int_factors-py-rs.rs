use std::cmp;
pub fn factor(n: u64) -> Vec<u64> {
    let mut factors1 = vec![];
    for x in 0..cmp::min(n, n as f64).sqrt() as u64 + 1 {
        if n % x == 0 {
            factors1.push(x);
            factors1.push(n / x);
        }
    }
    let mut factors2 = vec![];
    for i in factors1 {
        factors2.push(i);
    }
    factors2.sort();
    factors2
}
