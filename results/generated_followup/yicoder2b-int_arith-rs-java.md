The error is due to incorrect indentation of statements inside if, else conditionals. The correct indentation should be consistent with the if/else conditions for proper execution and output. 

Corrected version:
```rust
if (a as i32).abs() > remainder.abs() {
    println!("remainder:        {}", remainder);
} else {
    println!("remainder:        {}", a % b);
}
```
This corrected code first checks if the absolute value of `a` is greater than that of `remainder`. If it is, then it prints `remainder`. Else, it prints the remainder of `a` divided by `b`.
