 Sure! Here's the equivalent Rust code to compute the factors of a positive integer:

```rust
fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = Vec::new();
    for i in 1..=((num as f64).sqrt() as u32) {
        if num % i == 0 {
            n_factors.push(i);
            if num / i != i {
                n_factors.push(num / i);
            }
        }
    }
    n_factors.sort(); // numeric sort
    n_factors
}

fn main() {
    println!("{:?}", factors(45));  // [1,3,5,9,15,45]
    println!("{:?}", factors(53));  // [1,53]
    println!("{:?}", factors(64));  // [1,2,4,8,16,32,64]
}
```

Explanation:
- The function `factors` takes a positive integer `num` as input and returns a vector of its factors.
- We iterate from 1 to the square root of `num` (inclusive) and check if `i` is a factor of `num`.
- If `i` is a factor, we add it to the list of factors.
- If `num / i` is not equal to `i`, we also add `num / i` to the list of factors.
- Finally, we sort the list of factors and return it.
- The `main` function demonstrates how to call the `factors` function with different numbers and prints the results.
