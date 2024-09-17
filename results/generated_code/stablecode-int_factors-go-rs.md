The equivalent Rust code for the provided Go code is as follows:

```rust
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
    println!(
        "Factors of {}: {:?}",
        nr, generate_factors(nr)
    );
    println!(
        "Number of factors = {}",
        generate_factors(nr).len()
    ));
}

fn generate_factors(mut nr: i64) -> Vec<i64> {
    let mut fs: Vec<i64> = Vec::new();
    fs.push(1);

    if nr <= 1 {
        return fs;
    }

    for d in 2..=nr as u32 {
        while nr % (d as i64) == 0 {
            nr /= d as i64;
            fs.push(d as i64));
        }
    }
    if nr > 1 {
        fs.push(nr);
    }

    fs
}
```

Please note that the Rust version has some differences compared to the Go code, mainly due to language-specific features and idioms.
