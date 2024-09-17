```rust
fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = Vec::new();
    let limit = (num as f64).sqrt() as u32;
    
    for i in 1..=limit {
        if num % i == 0 {
            n_factors.push(i);
            if num / i != i {
                n_factors.push(num / i);
            }
        }
    }

    n_factors.sort();
    return n_factors;
}

fn main() {
    println!("{:?}", factors(45));  // [1,3,5,9,15,45] 
    println!("{:?}", factors(53));  // [1,53] 
    println!("{:?}", factors(64));  // [1,2,4,8,16,32,64]
}
```

This Rust code is almost identical to the JavaScript version except for syntax changes like replacing var with mut, replacing array.push with Vec.push and replacing the anonymous sort function with a standard library one.
