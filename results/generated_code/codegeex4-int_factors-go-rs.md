```rust
fn print_factors(nr: i64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }

    let mut fs = vec![1];
    let mut e = 0;

    while nr & 1 == 0 {
        nr >>= 1;
        e += 1;
    }
    apf(&mut fs, 2, e);

    let d: i64 = 3;
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
            apf(&mut fs, d, e);
        }

        d += 2;
    }

    println!("Factors of {}: {:?}", nr, fs);
    println!("Number of factors = {}", fs.len());
}

fn apf(fs: &mut Vec<i64>, p: i64, e: i64) {
    let len = fs.len();
    for i in 0..len {
        let pp = *fs.get(i).unwrap() * p;
        for j in 0..e {
            fs.push(pp);
        }
    }
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
}
```

Note that Rust does not have closures with variable number of arguments like Go, and array slice length cannot be determined at runtime like in Golang. Therefore, the `apf` function has been modified to accept a mutable reference to an array slice, which can then be extended in place. Also note that the original Go code had a bug because it did not check if the index is within bounds before getting its value inside apf function, which was not converted in Rust code as well.
