This error originates from the `println` macro which is being used to display messages, but it seems that the arguments passed to this function don't match with the formatting specifiers provided in the string. In Rust, you should provide a format string (before the placeholders) and then list your values in parentheses following the string.

The error message `E0606` indicates that the expression `*x as i64` is not valid because it's trying to dereference an integer (`&{integer}`) into a `i64`, which is not possible.

Here's how you could fix this:

```rust
fn print_factors(n: i64) {
    if n < 1 {
        println!("Factors of {} not computed", n);
        return;
    }
    let mut fs = vec![1];
    fs.extend((0..).step_by(1)); // initializes all elements to 1
    fn apf(p: i64, e: usize) {
        for _ in 0..e {
            let mut x = p;
            while let &is = fs.first() {
                if let Err(_)= is.push(&*x as i64) {}
            }
        }
    } // end apf
    apf(n, 1);
    println!("Factors of {} are: {}", n, fs.iter().map(|x| x as i64).collect::<Vec<_>>());
    println!("Number of factors = {}", fs.len());
} // end print_factors
```
Please note that you might want to adjust the code according to your specific needs or use different approaches to compute the factors. This approach iterates all possible factors and pushes each factor into a Vec until it encounters a Vector where `push(&*x as i64)` returns Err, indicating that we've reached our desired length for this vector.
