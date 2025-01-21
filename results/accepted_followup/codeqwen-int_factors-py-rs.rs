use std::collections::HashSet;

fn factor(n: u32) -> HashSet<u32> {
    let mut factors = HashSet::new();
    for x in 1..=(n as f64).sqrt() as u32 {
        if n % x == 0 {
            factors.insert(x);
            factors.insert(n / x);
        }
    }
    let x = (n as f64).sqrt() as u32;
    if x * x == n {
        factors.insert(x);
    }
    return factors;
}

fn main() {
    for i in vec![45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
