This code converts the given Python code to Rust. Here's an explanation of each line of the converted Rust code:
```rust
use std::iter;

fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    let mut factors2 = vec![];

    for x in 1..isqrt(n) {
        if n % x == 0 {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    let mut x = isqrt(n) + 1;

    if x * x == n {
        factors1.push(x);
    }

    factors1.extend(iter::from_fn(move |_| Some(factors2.pop().unwrap())));

    factors1
}

for i in vec![45, 53, 64] {
    println!("{}: Factors: {:?}", i, factor(i));
}
```
In this Rust code snippet, we use the `std::iter` module to create an iterator from a closure that generates the factors of a positive integer. The closure takes a single parameter, which is used as the loop variable in the for loop. We start by checking if the number being factored is divisible by any prime numbers less than or equal to its square root. If it is, we add the factor and its reciprocal (i.e., the number divided by the factor) to two separate vectors `factors1` and `factors2`.

After that, we check if the number being factored is a perfect square. If it is, we add the prime factor to the `factors1` vector. Finally, we extend the `factors1` vector with the elements of the `factors2` vector in reverse order using the `std::iter::from_fn()` function.

The final line of the code prints the factors for each number in a vector.
