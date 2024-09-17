 In Rust, you can use the `sqrt` function from the standard library to compute the square root of a number. For finding integer divisors, you can just loop through all numbers less than the given number and check if it divides evenly. Here's how your Python code might be translated into Rust:

```rust
fn factor(n: u32) -> Vec<u32> {
    let mut factors1 = vec![];
    for x in 1..n.sqrt() as u32 + 1 {
        if n % x == 0 {
            factors1.push(x);
            factors1.push(n / x);
        }
    }
    let x: u32 = n.sqrt() as u32 + 1;
    if (x * x) == n {
        factors1.push(x);
    }
    // This step is not necessary since in Rust, the range operator automatically includes the end value
    //factors1.append(&mut reversed(factors2));
    return factors1;
}

fn main() {
    for i in &[45, 53, 64] {
        println!("{}: factors: {:?}", i, factor(*i));
    }
}
```

In this version of the code, `factor` is a function that takes an unsigned 32-bit integer and returns a vector containing its factors. The `main` function then tests this function with 45, 53, and 64. 

Note: You have to remove `.extend(reversed(factors2))` because in Rust, the range operator automatically includes the end value (unlike in Python). Also, unlike Python, you cannot directly append a vector to another vector with `append`. Instead, use the spread (`...`) operator.
