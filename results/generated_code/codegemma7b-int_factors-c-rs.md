```rust
use std::collections::HashSet;

fn factor(num: i32) -> HashSet<i32> {
    let mut factors = HashSet::new();
    let mut divisor = 2;

    while divisor * divisor <= num {
        while num % divisor == 0 {
            factors.insert(divisor);
            num /= divisor;
        }
        divisor += 1;
    }

    if num > 1 {
        factors.insert(num);
    }

    factors
}

fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];

    for num in nums2factor {
        let factors = factor(num);
        print!("Factors of {} are:\n", num);

        for factor in factors {
            print!("{}, ", factor);
        }

        println!();
    }
}
```
