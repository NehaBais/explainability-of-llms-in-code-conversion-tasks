fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    for x in 1..n.sqrt() as u32 + 1 {
        if n % x == 0 {
            factors1.push(x);
            factors1.push(n / x);
        }
    }
    let x: u32 = n.sqrt() as u32 + 1;
    if (x * x) == n {
        factors1.push(x);
    }
    // This step is not necessary since in Rust, the range operator automatically includes the end value
    //factors1.append(&mut reversed(factors2));
    return factors1;
}

fn main() {
    for i in &[45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(*i));
    }
}
