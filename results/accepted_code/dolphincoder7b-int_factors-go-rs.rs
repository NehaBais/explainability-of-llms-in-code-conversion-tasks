use std::fmt;

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
        fmt::println!("Factors of {} not computed", nr);
        return;
    }
    println!("Factors of {}:", nr);
    let mut fs = vec![1];
    let mut apf = |p: u32, e: usize| {
        let n = fs.len();
        for _ in 0..e {
            for j in 0..n {
                fs.push(fs[j] * p as i64);
            }
        }
    };
    let mut e = 0;
    while nr % 2 == 0 {
        nr /= 2;
        e += 1;
    }
    apf(2, e);

    for d in (3..).step_by(2) {
        if d * d > nr {
            break;
        }
        let mut e = 0;
        while nr % d == 0 {
            nr /= d;
            e += 1;
        }
        if e > 0 {
            apf(d, e);
        }
    }

    println!("{:?}", fs);
    println!("Number of factors = {}", fs.len());
}
