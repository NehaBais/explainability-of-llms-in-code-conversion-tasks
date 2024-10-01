Here is the equivalent Rust code for your Python function. This version uses iterators and `std::iter::Enumerate` to generate and iterate over the range of numbers up to the square root of the given number:

```rust
use std::cmp::PartialOrd; 

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];
    for (x, _) in (1..((n as f64).sqrt() as u32 + 1)).enumerate() {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }
    // Reverse factors2 and add to factors1
    let mut rev = factors2.into_iter().rev().collect::<Vec<_>>();
    if let Some((last, _)) = rev.iter().last() {
        if *last > &factors1.last().unwrap() && n % *last == 0 {
            factors1.push(*last);
        }
    }
    factors1.extend(rev);
    factors1
}

fn main() {
    for i in vec![45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(i));
    }
}
```
This Rust version of your code works the same way as your Python function. It creates two vectors to hold the found factors. It iterates over a range from 1 up to the square root of `n` (rounded up) and checks if each number divides evenly into `n`. If it does, that number and the result of dividing `n` by that number are added as factors. The factors2 vector is then reversed before being added to the end of the first list of factors. The square root check has been adjusted to only add a factor if it's greater than the last element in the list (to avoid duplication) and only when `n %` factor returns 0, which is consistent with original Python code behavior.
