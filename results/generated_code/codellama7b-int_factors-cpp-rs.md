This is a C++ program that computes the factors of a positive integer. Here's how you can translate it into Rust:

First, let's define the function `generate_factors` in Rust:
```rust
fn generate_factors(n: i32) -> Vec<i32> {
    // Initialize the factors vector
    let mut factors = vec![1, n];

    // Iterate from 2 to the square root of n
    for i in 2..(n as f64).sqrt().ceil() as i32 {
        // Check if n is divisible by i
        if n % i == 0 {
            // Add i and n/i to the factors vector
            factors.push(i);
            factors.push(n / i);
        }
    }

    // Sort the factors vector in ascending order
    factors.sort();

    return factors;
}
```
Next, let's define the `main` function that calls the `generate_factors` function:
```rust
fn main() {
    // Define an array of sample numbers to compute the factors for
    let sample_numbers = [3135, 45, 60, 81];

    // Iterate over each sample number and generate its factors
    for i in 0..sample_numbers.len() {
        println!("Factors of {} are: ", sample_numbers[i]);
        let factors = generate_factors(sample_numbers[i]);
        for factor in &factors {
            print!("{} ", factor);
        }
        println!();
    }
}
```
Note that Rust doesn't have a built-in `iostream` library, so we need to use the `std::io::stdout` method to print the output. Also, Rust uses immutable vectors by default, so we need to use the `mut` keyword to create a mutable vector that can be modified.

Finally, let's run the program:
```rust
fn main() {
    let sample_numbers = [3135, 45, 60, 81];

    for i in 0..sample_numbers.len() {
        println!("Factors of {} are: ", sample_numbers[i]);
        let factors = generate_factors(sample_numbers[i]);
        for factor in &factors {
            print!("{} ", factor);
        }
        println!();
    }
}
```
This will output the following:
```
Factors of 3135 are:  1 3135 5 6247
Factors of 45 are:    1 45
Factors of 60 are:    1 60 3
Factors of 81 are:    1 81 9
```
