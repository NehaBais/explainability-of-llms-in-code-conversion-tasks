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
    println!("Factors of {}: {:?}", nr, factors_of(nr));
}

fn factors_of(mut nr: i64) -> Vec<i64> {
    let mut fs = vec![1];
    
    fn apf(fs: &mut Vec<i64>, p: i64, e: usize) {
        let n = fs.len();
        for _ in 0..e {
            for j in 0..n {
                fs.push(fs[j] * p);
            }
        }
    }
    
    let mut e = 0;
    while nr & 1 == 0 {
        e += 1;
        nr >>= 1;
    }
    apf(&mut fs, 2, e);
    
    let mut d = 3;
    while nr > 1 {
        if d * d > nr {
            d = nr;
        }
        let mut ee = 0;
        while nr % d == 0 {
            ee += 1;
            nr /= d;
        }
        if ee > 0 {
            apf(&mut fs, d, ee);
        }
        d += 2;
    }
    
    fs.sort_unstable();
    fs
}