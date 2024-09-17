```rust
fn isqrt(n: u32) -> u32 {
    let mut low = 0;
    let mut high = n;
    while low <= high {
        let mid = low + (high - low) / 2;
        if mid * mid == n { return mid; }
        else if mid * mid < n { low = mid + 1; }
        else { high = mid - 1; }
    }
    high
}

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];

    for x in 1..=isqrt(n) {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    factors1.extend(factors2.into_iter().rev());
    factors1
}

fn main() {
    println!("{}: factors: {:?}", 45, factor(45));
    println!("{}: factors: {:?}", 53, factor(53));
    println!("{}: factors: {:?}", 64, factor(64));
}
```

Note that due to the difference in number systems between Python and Rust, we need to ensure that n is a positive integer (u32). We also don't have built-in function for getting square root of an integer in Rust. So we implemented our own function isqrt().
