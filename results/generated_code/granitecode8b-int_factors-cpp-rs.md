Here's the Rust code that computes the factors of a positive integer:
```
fn generate_factors(n: i32) -> Vec {
 let mut factors = vec![1, n];
 for i in (2..=(n as f64).sqrt().floor() as i32).step_by(1) {
 if n % i == 0 {
 factors.push(i);
 if (i * i) != n {
 factors.push(n / i);
 }
 }
 }
 factors.sort();
 factors
}
fn main() {
 let sample_numbers = vec![3135, 45, 60, 81];
 for &num in &sample_numbers {
 let factors = generate_factors(num);
 println!("Factors of {} are: {:?}", num, factors);
 }
}
```
The `generate_factors` function takes an integer `n` as input and returns a vector of integers that are the factors of `n`. The function first initializes a vector with two elements: 1 and `n`. It then loops through all integers from 2 to the square root of `n`, checking if each integer is a factor of `n`. If it is, it adds it to the vector. If it's not a perfect square, it also adds the corresponding quotient to the vector. Finally, the function sorts the vector and returns it.
The `main` function creates a vector of sample numbers and loops through each one, calling the `generate_factors` function to compute its factors. It then prints out the factors using `println!`.
Note that in Rust, vectors are indexed starting at 0, so the loop iterates over the indices 0, 1, 2, etc., up to `sample_numbers.len() - 1`. The `step_by` method is used to skip multiples of 2 by setting the step size to 1.

