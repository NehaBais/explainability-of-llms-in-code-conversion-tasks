 To convert the code from Java to Rust, we need to use Rust's syntax and libraries.
Here is the converted Rust code:
```rust
use std::collections::TreeSet;

fn factors(n: u64) -> TreeSet<u64> {
    let mut factors = TreeSet::new();
    factors.insert(n);
    factors.insert(1);

    for test in (2..=((n as f64).sqrt() as u64)).rev() {
        if n % test == 0 {
            factors.insert(test);
            factors.insert(n / test);
        }
    }

    return factors;
}
```
The `use std::collections::TreeSet` line imports the `TreeSet` type from the standard library, which we will use to create a set of factors.

The function signature `fn factors(n: u64) -> TreeSet<u64>` indicates that the function takes an unsigned 64-bit integer as input and returns a `TreeSet` of unsigned 64-bit integers.

Inside the function, we first create an empty `TreeSet` called `factors`. We then add the number being factored (`n`) to the set, as well as the value 1, which is always a factor of any positive integer.

We then iterate over the range of numbers from 2 to the square root of the input number, in reverse order (i.e., starting with the largest numbers and working our way down). For each number `test` in this range, we check if it divides evenly into the input number (`n`). If so, we add both `test` and `n/test` to the set of factors.

Finally, we return the set of factors.
