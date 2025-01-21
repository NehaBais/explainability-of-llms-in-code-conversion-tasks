 Sure! Below is the Rust code that performs the same functionality as your Python script. This Rust program computes the factors of a positive integer and prints them for given test cases.

```rust
fn main() {
    fn factors(n: i32) -> Vec<i32> {
        let mut factors = Vec::new();
        let sqrt_n = (n as f64).sqrt() as i32;
        
        for x in 1..=sqrt_n {
            if n % x == 0 {
                factors.push(x);
                if x != n / x {
                    factors.push(n / x);
                }
            }
        }
        
        factors.sort();
        factors
    }
    
    let test_cases = [45, 53, 64];
    for &i in &test_cases {
        println!("{}: factors: {:?}", i, factors(i));
    }
}
```

### Explanation:
1. **Function Definition**: The `factors` function takes an integer `n` and returns a vector of its factors.
2. **Square Root Calculation**: We calculate the square root of `n` using `sqrt_n`. This helps in reducing the number of iterations needed to find factors.
3. **Finding Factors**: We iterate from 1 to `sqrt_n`. For each `x`, if `n % x == 0`, we add both `x` and `n / x` to the list of factors, ensuring not to include duplicates when `x == n / x`.
4. **Sorting**: The factors are sorted before returning them.
5. **Main Function**: We define a vector `test_cases` with the numbers 45, 53, and 64. For each number in this vector, we call the `factors` function and print the result.

This Rust code should give you the same output as your Python script when run.
