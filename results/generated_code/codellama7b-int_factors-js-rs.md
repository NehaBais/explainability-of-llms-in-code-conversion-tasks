Rust provides a number of ways to compute the factors of a positive integer. Here is one possible implementation using iterators and the `Vec` container:
```
fn factors(num: u32) -> Vec<u32> {
    (1..=num as u32).filter(|&i| num % i == 0).collect()
}

assert_eq!(factors(45), vec![1, 3, 5, 9, 15, 45]);
assert_eq!(factors(53), vec![1, 53]);
assert_eq!(factors(64), vec![1, 2, 4, 8, 16, 32, 64]);
```
This implementation uses the `filter` method on an iterator to filter out only the divisors of a number. The resulting iterator is then converted to a vector using the `collect` method.

Alternatively, you can use the `divisors` function from the `num_integer` crate, which provides a more efficient algorithm for computing the factors of an integer:
```
use num_integer::divisors;

fn factors(num: u32) -> Vec<u32> {
    divisors(num).collect()
}

assert_eq!(factors(45), vec![1, 3, 5, 9, 15, 45]);
assert_eq!(factors(53), vec![1, 53]);
assert_eq!(factors(64), vec![1, 2, 4, 8, 16, 32, 64]);
```
This function uses the `divisors` function from the `num_integer` crate to compute the divisors of a number. The resulting iterator is then converted to a vector using the `collect` method.
