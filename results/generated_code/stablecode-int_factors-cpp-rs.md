Here is the Rust version of your C++ code:

```rust
fn generate_factors(n: i32) -> Vec<i32> {
    let mut factors = vec![1, n];
    for i in 2..((n as f64).sqrt() as i32 + 1)) {
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
    let sample_numbers = vec![313, 5, 6, 9];

    for number in sample_numbers {
        let factors = generate_factors(number);
        println!("Factors of {} are: {:?}", number, factors);
    }
}
```
This Rust code converts your given C++ code to a working Rust program. 

The `generate_factors` function generates the factors of a positive integer by using two for loops, and then pushing the found factors into a vector. This function also sorts the vectors in ascending order.

In the main function, I create a vector called `sample_numbers`, which contains the numbers you want to find the factors of. Then, for each number in the `sample_numbers` vector, I call the `generate_factors` function and print out the result.
