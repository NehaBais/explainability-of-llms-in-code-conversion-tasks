fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    for x in 1..((n as f64).sqrt() as u32 + 1) {
        if n % x == 0 {
            factors1.push(x);
            factors1.push(n / x);
        }
    }
    let x: u32 = ((n as f64).sqrt() as u32 + 1) * 1;
    if (x * x) == n {
        factors1.push(x);
    }
    return factors1;
}

fn main() {
    for i in &[45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(*i));
    }
}
