Here's the converted code in Rust:
```
fn generate_factors(n: i32) -> Vec<i32> {
 let mut factors = vec![1, n];

 for i in 2..=(n as f64).sqrt().ceil() as u32 {
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
 let sample_numbers = [3135, 45, 60, 81];

 for &num in sample_numbers.iter() {
 let factors = generate_factors(num as i32);
 println!("Factors of {} are: {:?}", num, factors);
 }
}
```
Note that in Rust, the `i32` type is used to represent integers, so the function `generate_factors` returns a vector of `i32` values. Also note that there's no need for the `sqrt()` and `ceil()` functions as the loop can be written with a single condition `i * i <= n`.

