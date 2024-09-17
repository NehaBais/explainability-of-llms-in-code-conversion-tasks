use std::cmp::max;
fn isqrt(n: u64) -> u64 {
    let mut r = 1;
    while r * r < n {
        r += 1;
    }
    r
}
fn factor(n: u64) -> Vec<u64> {
    if n == 0 {
        return vec![];
    } else if n == 1 {
        return vec![1];
    }
    let mut factors = Vec::new();
    for x in (1..=isqrt(n)).rev() {
        if n % x == 0 {
            factors.push(x);
            factors.extend(factor(n / x));
            break;
        }
    }
    factors
}
fn main() {
    let test_cases = vec![45, 53, 64];
    for &i in &test_cases {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
