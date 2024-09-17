Here's the Rust code that performs the same functionality as the provided JavaScript code:
```
fn factors(num: u64) -> Vec<u64> {
 let mut result = Vec::new();
 for i in 1..=(num as f64).sqrt().ceil() as u64 {
 if num % i == 0 {
 result.push(i);
 if i * i != num {
 result.push(num / i);
 }
 }
 }
 result.sort_unstable();
 result
}
 
fn main() {
 println!("Factors of 45: {:?}", factors(45));
 println!("Factors of 53: {:?}", factors(53));
 println!("Factors of 64: {:?}", factors(64));
}
```
This Rust code defines a function `factors` that takes a positive integer as input and returns a vector of its factors. The function uses a for loop to iterate through all possible divisors of the input number, and adds them to the result vector if they divide evenly. Finally, the result vector is sorted in ascending order using the `sort_unstable` method and printed to the console.

