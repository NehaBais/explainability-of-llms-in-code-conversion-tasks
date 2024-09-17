Answer:
```rust
fn main() {
    println!("");
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
    print!("Factors of {:}: ", nr);
    let mut fs = vec![1];
    fn apf(p: i64, e: usize) {
        let n = fs.len();
        for i in 0..e {
            for j in 0..n {
                fs.push(fs[j] * p.pow(i as u32));
            }
        }
    }
    let mut e = 0;
    while nr & 1 == 0 {
        nr >>= 1;
        e += 1;
    }
    apf(2, e);
    for d in (3..).step_by(2) {
        if d * d > nr {
            break;
        }
        while nr % d == 0 {
            e += 1;
            nr /= d;
        }
        if e > 0 {
            apf(d, e);
        }
    }
    println!("{:?}", fs.iter().collect::<Vec<_>>());
}
```