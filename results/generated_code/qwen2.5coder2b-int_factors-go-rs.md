To convert the given Go code to Rust, we need to consider a few differences in syntax and idioms between Golang and Rust. Specifically, we will use vectors (similar to slices) for storing the factors and functions like `append` and `println!` instead of built-in print methods. Here's how the equivalent Rust code would look:

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
        println!("
Factors of {}, not computed", nr);
        return;
    }
    println!("Factors of {}:", nr);

    let mut fs = Vec::new();
    fs.push(1);
    fn apf(p: i64, e: i64) {
        for _ in 0..e {
            fs.push(p * fs.last().unwrap());
        }
    }

    let mut e = 0;
    while nr % 2 == 0 {
        e += 1;
        nr /= 2;
    }
    apf(2, e);

    for d in (3..).step_by(2) {
        if d * d > nr {
            d = nr;
        }
        let mut e = 0;
        while nr % d == 0 {
            e += 1;
            nr /= d;
        }
        if e > 0 {
            apf(d, e);
        }
    }

    fs.sort_unstable();
    println!("{:?}", fs);
    println!("Number of factors: {}", fs.len());
}
```

### Explanation:
1. **Vec**: We use `Vec<i64>` to store the factors because vectors in Rust are dynamic and can grow as needed.
2. **apf Function**: The `apf` function is implemented similar to the Go version, but it uses a loop for generating factors.
3. **Factor Calculation**: The code calculates even factors first by repeatedly dividing `nr` by 2 until it's odd. Then, it iterates over odd numbers starting from 3 and calculates their factors.
4. **Sorting and Printing**: Finally, the factors are sorted and printed, along with the count of factors.

This Rust version maintains the functionality of the Go code but uses idiomatic Rust practices for handling vectors and functions.
