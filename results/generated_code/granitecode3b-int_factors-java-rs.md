Sure, here's the equivalent Rust code for computing the factors of a positive integer:
```
fn factors(mut n: u64) -> Vec<u64> {
 let mut result = vec![n];
 if n > 1 {
  result.push(1);
 }
 for test in (0..(n as f64).sqrt().floor() as u64).rev() {
  if n % test == 0 {
   result.push(test);
   result.push(n / test);
  }
 }
 result.sort();
 result.dedup();
 result
}
```
This code uses a loop to iterate through all the numbers less than or equal to the square root of `n` and check if they divide `n` evenly. If they do, both factors are added to the result vector. The resulting vector is then sorted and deduplicated before being returned.

