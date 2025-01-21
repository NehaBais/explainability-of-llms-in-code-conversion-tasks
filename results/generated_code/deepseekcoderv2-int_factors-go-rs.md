 Sure! Below is the Rust equivalent of the provided Go code to compute the factors of a positive integer:

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
```

### Explanation:
1. **Main Function**: The `main` function remains largely the same, calling `print_factors` with various test cases.
2. **Print Factors Function**: The `print_factors` function is used to print the factors of a given number. It calls the `factors_of` function and prints the result.
3. **Factors Calculation**: The `factors_of` function calculates the factors:
   - It initializes a vector `fs` with the factor 1.
   - The helper function `apf` appends new factors based on the prime number and its exponent.
   - It handles even numbers by counting their occurrences and calling `apf`.
   - For odd numbers, it finds divisors starting from 3 and continues until the number is reduced to 1.
4. **Sorting**: The final vector of factors is sorted to ensure they are in ascending order before returning.

This Rust code should provide similar functionality to the Go code provided.
