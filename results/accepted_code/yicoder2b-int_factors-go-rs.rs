fn main() {
    print_factors(-1);
    print_factors(0);
    print_factors(1);
    print_factors(2);
    print_factors(3);
    print_factors(53);
    print_factors(45);
    print_factors(64);
    print_factors(600851475143);
    print_factors(999999999999999989);
}

fn print_factors(n: i64) {
    if n < 1 {
        println!("Factors of {} not computed", n);
        return;
    }
    let mut fs = vec![1];
    fs.extend((0..).step_by(1));
    fn apf(p: i64, e: usize) {
        let n = fs.len();
        for _ in (0..e).step_by(1) {
            fs.resize(n * p as usize, 0);
        }
    }
    let mut e: u32 = 0;
    let mut nr = n & (!n);
    while nr % 2 == 0 {
        e += 1;
        nr >>= 1;
    }
    apf(2, e as usize);
    let d: i64 = 3;
    while n > 1 && d * d <= n {
        if n % d == 0 {
            let mut e = 0;
            while n % d == 0 {
                e += 1;
                n /= d;
            }
            apf(d, e as usize);
        }
        d += 2;
    }
    if n > 1 {
        apf(n, 1);
    }
    println!(
        "Factors of {} are: {}",
        n,
        fs.iter().map(|x| x as i64).collect::<Vec<_>>()
    );
    println!("Number of factors = {}", fs.len());
}
