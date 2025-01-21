use std::cmp;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = Vec::new();
    let mut factors2 = Vec::new();
    
    for x in 1..=(n as f64).sqrt() as u32 {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    if (n as f64).sqrt().powi(2) == n as f64 {
        factors1.push((n as f64).sqrt() as u32);
    }

    factors1.extend(factors2.iter().rev().cloned());

    factors1
}

fn main() {
    for &i in &[45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}