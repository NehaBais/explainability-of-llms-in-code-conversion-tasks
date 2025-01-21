Here is the equivalent code in Rust:

```rust
fn print_factors(nr: i64) {
    if nr < 1 {
        println!("Factors of {} not computed", nr);
        return;
    }
    let mut fs = vec![1];
    
    fn apf(fs: &mut Vec<i64>, p: i64, e: usize) {
        for i in 0..e {
            let pp = i64::pow(p, i as u32);
            let n = fs.len();
            for j in 0..n {
                fs.push(fs[j] * pp);
            }
        }
    }

    let mut e = 0;
    while nr % 2 == 0 {
        nr /= 2;
        e += 1;
    }
    
    apf(&mut fs, 2, e);

    let mut d = 3;
    while nr > 1 {
        if (d * d) > nr {
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
```

This Rust code works similarly to the provided Go code. It computes and prints out the factors of a given number, as well as the count of those factors.

Do note that this version has a different method of appending elements to `fs` (using Rust's `vec![]` and `.push()` methods) compared to the Go code's use of `append()`. This is because Go does not have explicit `Vec` type like Rust, making its slices mutable directly.

Also, Rust uses `usize` for indexing and lengths of collections, so `e` is converted from `int` to `usize` before being passed to `apf`.

Lastly, Rust's `while` loops and `for` loops are used instead of Go's `for` loop syntax.
