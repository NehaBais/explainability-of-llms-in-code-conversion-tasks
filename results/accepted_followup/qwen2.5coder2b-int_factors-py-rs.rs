fn main() {
    for i in [45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}

fn factor(n: u64) -> Vec<u64> {
    let mut factors = Vec::new();

    if n <= 1 {
        return factors;
    }

    let sqrt_n = (n as f64).sqrt() as u64;

    for x in 1..=sqrt_n {
        if n % x == 0 {
            factors.push(x);
            if x != sqrt_n {
                factors.push(n / x);
            }
        }
    }

    if sqrt_n * sqrt_n == n {
        factors.push(sqrt_n);
    }

    factors.sort_unstable();
    factors.reverse();

    return factors;
}
