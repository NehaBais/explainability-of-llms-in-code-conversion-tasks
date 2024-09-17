The equivalent code in Rust would be as follows:

```rust
use std::collections::HashSet;

fn factor(n: u32) -> HashSet<u32> {
    let mut factors = HashSet::new();
    for x in 1..=n.sqrt() {
        if n % x == 0 {
            factors.insert(x);
            factors.insert(n / x);
        }
    }
    let x = (n as f64).sqrt() as u32;
    if x * x == n {
        factors.insert(x);
    }
    return factors;
}

fn main() {
    for i in vec![45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
```
This code defines a function `factor` which returns the set of factors of a given number. The function works by iterating from 1 up to the square root of the number (inclusive). If dividing the number by each number in this range gives a remainder of zero, it means that it is a factor and both the number itself and its corresponding quotient are added to the set of factors.

The code then calculates the square root of `n` as an integer and checks if `x*x == n`. If this condition is true, then `n` is also a perfect square and thus a factor of itself is added to the set of factors.

Finally in the main function we call `factor` with some numbers and print out their factors. 
Notice that in Rust we don't have built-in support for reverse iteration or list reversal, so I used an iterator on a reversed range instead. Also note that factor(64) is [1,2,4,8,16,32,64] and not [1, 2, 4, 8, 16, 32, 64, 128], because we do not include 128 as a factor of 64 in our code.
