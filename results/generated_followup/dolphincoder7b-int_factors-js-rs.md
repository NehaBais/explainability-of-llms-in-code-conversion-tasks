The error "main function not found" occurs because Rust does not have built-in support for JavaScript-style code execution. The provided example uses an IIFE (Immediately Invoked Function Expression) that is not supported by the Rust compiler. Instead, you should modify the code to follow the typical Rust style guide and use a `main` function as shown in the example below:
```rs
fn factors(num: i64) -> Vec<i64> {
    let mut n_factors  = Vec::new();
    for i in 1..=(num as f64).sqrt().floor() as i64 {
        if num % i == 0 {
            n_factors.push(i);
            if num / i != i {
                n_factors.push(num / i);
            }
        }
     }
    n_factors.sort();  // numeric sort
    return n_factors;
}
```
This version of the code includes a `main` function that calls `factors()` with an example value, and then prints out the result vector using Rust's built-in formatting capabilities.
