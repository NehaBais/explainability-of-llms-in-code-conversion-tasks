Here is the equivalent Rust code for your C++ code:

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
        print!("Factors of {:4} are: ", number);
        for factor in factors.iter() {
            print!("{}", factor);
            if factor != &factors[factors.len() - 1] {
                print!(" ");
            }
        }
        println!();
    }
}
```

This code does the same thing as your C++ code. It defines a `generate_factors` function that generates the factors of a given number. Then, it iterates over a list of sample numbers and prints out their factors.

One difference is how Rust handles vectors. Unlike C++, where you can push elements to a vector without specifying its size upfront, in Rust, you need to initialize a vector with some initial values (in this case, 1 and n). Another difference is the way Rust handles sorting - it uses the `sort` method on vectors.
