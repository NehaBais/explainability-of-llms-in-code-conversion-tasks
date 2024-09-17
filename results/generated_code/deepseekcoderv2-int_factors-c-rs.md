### Solution

```rust
use std::collections::VecDeque;

fn factor(num: i32) -> Vec<i32> {
    let mut factors = vec![];
    for dvsr in 1..=(num as f64).sqrt() as i32 {
        if num % dvsr == 0 {
            factors.push(dvsr);
            if dvsr * dvsr != num {
                factors.push(num / dvsr);
            }
        }
    }
    factors.sort();
    factors
}

fn main() {
    let mut ftors = VecDeque::new();
    for &num in [2059, 223092870, 3135, 45].iter() {
        let factors = factor(num);
        println!("Factors of {} are: {:?}", num, factors);
        ftors.push_back(&factors[..]);
    }
}
```
