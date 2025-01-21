use num_bigint::Integer;
pub fn factor(n: u64) -> Vec<u64> {
    let min = Integer::from(cmp::min(n, n as f64).sqrt() as u64);

    let mut factors1 = vec![];
    for x in Integer::from(0)..=min.clone() {
        if n % x.to_u64().unwrap() == 0 {
            factors1.push(x.to_u64().unwrap());
            factors1.push(n / x.to_u64().unwrap());
        }
    }

    let mut factors2 = vec![];
    for i in factors1 {
        factors2.push(i);
    }

    factors2.sort();
    factors2
}
