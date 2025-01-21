The error is due to the fact that the `?` operator can't convert the error type of `parse()` from `ParseIntError` to `std::io::Error`, which is required by the return type of `main()`. This is because `parse()` returns a `Result<T, ParseIntError>` and not a `Result<T, std::io::Error>`.

To fix this error, we can change the return type of `main()` to `Result<(), ParseIntError>` instead of `Result<(), std::io::Error>`. This will allow the `?` operator to convert the error type from `ParseIntError` to `std::io::Error` correctly.
```rs
use std::io;

fn main() -> Result<(), ParseIntError> {
    let mut a = String::new();
    let mut b = String::new();
    io::stdin().read_line(&mut a)?;
    io::stdin().read_line(&mut b)?;
    let a: i32 = a.trim().parse()?;
    let b: i32 = b.trim().parse()?;
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
    Ok(())
}
```
