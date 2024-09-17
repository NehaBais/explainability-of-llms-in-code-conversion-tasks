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

fn print_factors(nr: i64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }

    let mut fs = vec![1];

    fn apf(p: i64, e: usize, fs: &mut Vec<i64>) {
        for _ in 0..e {
            *fs = fs.iter().map(|&x| x * p).collect();
        }
    }

    let mut e = 0;
    while nr % 2 == 0 {
        nr /= 2;
        e += 1
    }
    apf(2, e, &mut fs);

    let d: i64 = 3;
    let mut n = nr;
    loop {
        if d * d > n {
            break;
        }
        if n % d == 0 {
            while n % d == 0 {
                n /= d
            }
            apf(d, 1, &mut fs);
        }
        d += 2;
    }

    println!("Factors of {} are: {:?}", nr, fs);
    println!("Number of factors = {}", fs.len());
}
