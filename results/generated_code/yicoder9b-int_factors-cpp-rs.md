Here is the equivalent Rust code for your C++ program: 

```rust
fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    for i in 2..=(n as f64).sqrt() as i32 {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }

    factors.sort();
    factors
}

fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for num in &sample_numbers {
        let factors = generate_factors(*num);
        println!("{:>4} factors: {:?}", num, factors)
    }
}
```

This Rust program does exactly the same thing as your C++ code. It calculates and displays the factors of each number in `sample_numbers` array. The function `generate_factors` is equivalent to the one in your original C++ code.
