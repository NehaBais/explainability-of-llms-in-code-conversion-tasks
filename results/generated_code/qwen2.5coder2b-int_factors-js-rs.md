Sure! Below is the equivalent Rust code for computing the factors of a positive integer:

```rust
fn factors(num: u32) -> Vec<u32> {
    let mut factors = Vec::new();
    let sqrt_num = (num as f64).sqrt() as u32;

    for i in 1..=sqrt_num {
        if num % i == 0 {
            factors.push(i);
            if num / i != i {
                factors.push(num / i);
            }
        }
    }

    factors.sort_unstable();
    factors
}

fn main() {
    println!("{:?}", factors(45)); // [1, 3, 5, 9, 15, 45]
    println!("{:?}", factors(53)); // [1, 53]
    println!("{:?}", factors(64)); // [1, 2, 4, 8, 16, 32, 64]
}
```

### Explanation:
1. **Function Definition**: The function `factors` takes an unsigned 32-bit integer as input.
2. **Sorting**: The factors are collected in a vector `factors`. To ensure the factors are sorted, we use `sort_unstable`, which does not guarantee stability but is generally faster for this purpose.
3. **Loop and Condition**: We loop through numbers from 1 to the square root of the input number (`sqrt_num`). If `num` is divisible by `i`, both `i` and `num / i` are factors, so we add them to the vector.
4. **Return**: Finally, we return the sorted vector of factors.

### Usage:
The `main` function demonstrates calling the `factors` function with different inputs and printing the results.
