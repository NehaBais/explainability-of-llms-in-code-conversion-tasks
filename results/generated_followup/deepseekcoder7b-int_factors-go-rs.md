The error is caused by incorrect usage of `write` function that expects to return a `Result<(), Error>` but it's currently returning a unit type `()`. The fix would be to modify the `write` call to return a result as well if an error occurs.

The entire corrected code would be: 

```rust
fn printFactorsOrMessage<F>(nr: &num_bigint::BigUint, fmt: F) -> std::result::Result<(), Box<dyn std::error::Error>>
where
    F: std::fmt::Write + 'static,
{
    if nr.is_zero() {
        write_fmt(fmt, "Number is zero")?;
    } else if nr.cmp(&num_bigint::BigUint::one()) == std::cmp<｜begin▁of▁sentence｜>Ordering::Less {
        write_fmt(fmt, "Factors of {} not computed", nr)?;
    } else {
        // Calculate and print factors here... 
    }
    
    Ok(())
}
```
This version will now always return a `Result` that can be handled by the caller. If an error occurs during formatting, it is returned as an `Err` variant containing more information about what went wrong. If everything goes well, we simply return `Ok(())` to indicate successful execution without any errors.

