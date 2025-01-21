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