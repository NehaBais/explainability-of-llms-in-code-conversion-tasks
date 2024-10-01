The equivalent code in Rust would be as follows:

```rust
use std::collections::VecDeque;

fn main() {
    let nums = vec![45, 53, 64];
    for num in &nums {
        let mut result = VecDeque::new();
        let limit: u64 = *num as u64;
        for x in 1..=limit {
            if (*num % x == 0) {
                result.push_back(x);
                result.push_front((*num / x) as u32);
            }
        }
        println!("{}: factors: {:?}", *num, result);
    }
}
```
Please note that we are using a `VecDeque` instead of the standard `vector<int>` in Python to avoid possible overflow if we calculate `x*x = num`. The `{:?}` format specifier is used for debugging purposes, it will output the list as a human-readable format.
