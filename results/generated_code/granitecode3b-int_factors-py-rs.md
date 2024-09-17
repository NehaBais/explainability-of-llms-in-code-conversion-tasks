Sure! Here's the Rust code that accomplishes the same task as the given Python code:
```rust
fn isqrt(mut n: u64) -> u64 {
    let mut result = 0;
    while n > 0 {
        result += 1;
        n -= result;
    }
    result - 1
}
 
fn factor(n: u64) -> Vec<u64> {
    if n == 0 {
        return vec![];
    }
 
    let mut result = Vec::new();
    for x in (1..isqrt(n)).rev() {
        if n % x == 0 {
            result.push(x);
            result.push(n / x);
        }
    }
    if isqrt(n) * isqrt(n) == n {
        result.push(isqrt(n));
    }
    result.reverse();
    result
}
 
fn main() {
    println!("factors of 45: {:?}", factor(45));
    println!("factors of 53: {:?}", factor(53));
    println!("factors of 64: {:?}", factor(64));
}
```
This Rust code uses the `isqrt` function to find the square root of a number, and then iterates through all numbers up to that square root to find its factors. The `factor` function returns a vector of the factors in descending order. In the main function, we print out the factors of 45, 53, and 64.

