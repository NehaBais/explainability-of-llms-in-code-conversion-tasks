In Rust, you can use the `Vec` data structure from the standard library to store your factors and print them with a trait provided by the `std::fmt` module. Here's how you would convert that code into Rust:

```rust
use std::vec::Vec;

fn generate_factors(n: usize) -> Vec<usize> {
    let mut factors = vec![1, n];
    for i in 2..=((n as f64).sqrt() as usize) {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }
    factors.sort();
    return factors;
}

fn main() {
   let sample_numbers = vec![3135, 45, 60, 81];
   for number in &sample_numbers {
       let factors = generate_factors(*number);
       println!("Factors of {:4} are: {:?}", number, factors);
   }
}
```
In this Rust code, the `Vec` data structure is used instead of vectors in C++. The same logic is applied inside the loop as well. Here, we use a for-loop with range from 2 to square root of given integer (as per mathematical definition) and check if number can be divided evenly without any remainder. If it does then it's a factor so we push into factors vector.

In `main` function, we iterate over the sample numbers in the same way as C++ code is doing with "copy" iterator of ostream_iterator. In Rust, you can print vectors directly using {:?} syntax. 

Please note that this is integer factorization only valid for positive integers (>= 0). Factorizing negative numbers would require a different approach which was not required in the provided C++ code.

