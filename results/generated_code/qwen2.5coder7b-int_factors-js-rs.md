Here is how you can convert the JavaScript code to Rust:

```rust
fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = vec![];
    for i in 1..=(num as f64).sqrt() as u32 + 1 {
        if num % i == 0 {
            n_factors.push(i);
            if (num / i != i) {
                n_factors.push(num / i);
            }
        }
    }
    n_factors.sort_unstable();  // numeric sort
    n_factors
}

fn main() {
    println!("{:?}", factors(45));  // [1,3,5,9,15,45] 
    println!("{:?}", factors(53));  // [1,53] 
    println!("{:?}", factors(64));  // [1,2,4,8,16,32,64]
}
```
In Rust, vectors (`Vec`) are used for dynamic arrays. The `sort_unstable` method is used to sort the vector in ascending order.
