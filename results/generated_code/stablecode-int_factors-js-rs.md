Here is the equivalent Rust code:

```rust
pub fn factors(num: u64) -> Vec<u64> {
    let mut n_factors = Vec::new();

    for i in 1..=((num as f64).sqrt() as u64)) {
        if num % i == 0 {
            n_factors.push(i);
            if num / i != i {
                n_factors.push(num / i));
            }
        }
    }

    n_factors.sort();  // numeric sort

    n_factors
}
```
This Rust function `factors` takes a positive integer `num`, computes and returns its factors as a sorted vector of u64 integers. It uses standard libraries to calculate the square root, floor it, iterate over the numbers up to it, and perform the necessary calculations for the factors. 

Please make sure that your Rust environment is set up properly before running this code. 

If you encounter any issues or have any further questions, please feel free to ask.
