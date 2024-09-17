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
        println!("Factors of {} not computed", nr);
        return;
    }
    println!("Factors of {}:", nr);
    let mut fs = vec![1];
    let mut apf = |p: i64, e: i32| {
        let n = fs.len();
        for i in 0..e as usize {
            for j in 0..n {
                fs.push(fs[j] * p);
            }
        }
    };
    let mut e = 0;
    while nr % 2 == 0 {
        nr >>= 1;
        e += 1;
    }
    apf(2, e);
    let mut d = 3;
    while nr > 1 {
        if d * d > nr {
            d = nr;
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
