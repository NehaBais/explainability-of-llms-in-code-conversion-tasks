 The errors occurred because Rust's `parse()` function can fail due to several reasons, such as an input that cannot be parsed into an integer, or an input that is too large for an integer (for example, "9223372036854775808" would not fit in a 32-bit signed integer). Because the `parse()` function returns a `Result<_, ParseIntError>`, which can be either Ok(value) or Err(error), you need to handle this error using the `?` operator. If an error occurs, it will return early and stop executing the rest of your code.

The fix involves adding another layer of error handling by using a `match` statement to catch the parse error specifically, and returning `std::io::Error` in the event that a parsing error occurs.

Here is the corrected version of your Rust code:
```rs
use std::io;
use std::str::FromStr;

fn main() -> io::Result<()> {
    let mut input = String::new();

    // Read two integers from user
    print!("Enter first integer: ");
    io::stdin().read_line(&mut input)?;
    let nbr1: i32 = match FromStr::from_str(input.trim()) {
        Ok(nbr) => nbr, 
        Err(_) => return Err(io::Error::new(io::ErrorKind::Other, "Failed to parse integer")),
    };

    print!("Enter second integer: ");
    io::stdin().read_line(&mut input)?;
    let nbr2: i32 = match FromStr::from_str(input.trim()) {
        Ok(nbr) => nbr, 
        Err(_) => return Err(io::Error::new(io::ErrorKind::Other, "Failed to parse integer")),
    };

    // Check if the first integer is less than, equal to or greater than the second one
    match nbr1 {
        nbr1 if nbr1 < nbr2 => println!("{} is less than {}", nbr1, nbr2),
        nbr1 if nbr1 > nbr2 => println!("{} is greater than {}", nbr1, nbr2),
        _ => println!("{} is equal to {}", nbr1, nbr2),
    };

    Ok(())
}
``` 

In this code:
- I use the `FromStr` trait for parsing integer strings.
- If parsing fails, an error message is printed and the function returns early with an IO error (using the `?` operator).
