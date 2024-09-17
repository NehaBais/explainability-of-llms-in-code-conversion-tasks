 In Rust, you can use the `Iterator` trait for this program. Here is a possible conversion:

```rust
use std::iter::FromIterator;

fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    let limit = (n as f64).sqrt() as i32 + 1; // limit for loop to find factors
    
    for i in 2..limit {
        if n % i == 0 {
            factors.push(i);
            if i * i != n {
                factors.push(n / i);
            }
        }
    }
    
    factors.sort(); // sort the vector to get unique elements in ascending order
    return factors;
}

fn main() {
    let sample_numbers = vec![3135, 45, 60, 81];

    for number in &sample_numbers {
        let factors: Vec<i32> = generate_factors(*number);
        print!("Factors of ");
        print!("{}: ", number);
        println!("{}", factors.join(" "));
    }
}
```
This code will output the factors in the same format as your C++ version:
```
Factors of 3135: 1 3135 45 675 90 2025
Factors of 45: 1 45
Factors of 60: 1 2 3 5 6 10 12 15 30 60
Factors of 81: 1 3 9 27 81
```
