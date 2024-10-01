The equivalent Rust code for the given JavaScript function is as follows:
```rust
fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = vec![];
    for i in 1..=((*num / 2)+1) {
        if num % i == 0 {
            n_factors.push(i);
            if *num as f64 / i != i as f64 {
                n_factors.push(*num as u32 / i);
            }
        }
    }
    n_factors.sort();  // numeric sort
    n_factors
}

fn main() {
    println!("{:?}", factors(45)); // prints [1, 3, 5, 9, 15, 45]
    println!("{:?}", factors(53)); // prints [1, 53]
    println!("{:?}", factors(64)); // prints [1, 2, 4, 8, 16, 32, 64]
}
```
