fn print_factors(mut nr: i64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }
    let mut fs = vec![1];
    let apf = |p: i64, e: i32| {
        let n = fs.len();
        for i in 0..e as usize {
            let pp = p.pow(i as u32 + 1);
            for j in 0..n {
                fs.push(fs[j] * pp);
            }
        }
    };

    let mut e = 0;
    while nr % 2 == 0 {
        e += 1;
        nr /= 2;
    }
    apf(2, e as i32);

    for d in (3..).step_by(2).take_while(|&d| d * d <= nr) {
        let mut e = 0;
        while nr % d == 0 {
            e += 1;
            nr /= d;
        }
        if e > 0 {
            apf(d, e);
        }
    }

    println!("{:?}", fs);
    println!("Number of factors = {}", fs.len());
}

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
