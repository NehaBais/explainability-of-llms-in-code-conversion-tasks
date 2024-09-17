Here is the Rust version of your C++ code:
```rust
fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];

    for i in 2..=((n as f64).sqrt() as i32) {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }

    factors.sort();
    factors
}

fn main() {
    let sample_numbers = vec![3135, 45, 60, 81];

    for &number in &sample_numbers {
        let factors = generate_factors(number);
        println!("Factors of {}: {}", number, factors.iter().map(|&x| x.to_string()).collect::<Vec<String>>().join(" "));
    }
}
```
This Rust version does essentially the same thing as your C++ code, but it uses a slightly different approach and format for outputting the results. The function `generate_factors` calculates the factors of a given number by iterating over possible divisors, starting from 2 up to the square root of the number. If a divisor is found, both the divisor and its corresponding quotient are added to the list of factors. Then it sorts the list of factors in ascending order before returning it. The `main` function iterates over an array of sample numbers, calculates their factors with the `generate_factors` function, and then prints out the results.
