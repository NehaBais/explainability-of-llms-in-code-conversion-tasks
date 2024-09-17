Here is the Rust version of your Python code:

```rust
use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter first integer: ");
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    let input1: i32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    println!("Enter second integer: ");
    io::stdin().read_line(&mut input2).expect("Failed to read line");
    let input2: i32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Invalid input"),
    };

    println!("Sum:		{}", input1 + input2);
    println!("Difference:	{}", input1 - input2);
    println!("Product: 	{}", input1 * input2);
    println!("Integer quotient: {}", input1 / input2);

    let remainder = input1 % input2;
    if remainder.is_negative() {
        // The sign of the first operand or the second operand, whichever has a positive value
        println!("Actual Remainder: {}", -remainder);
    } else {
        println!("Actual Remainder: {}", remainder);
    }

    let mut uy = 0;
    if input1 > 0 && input2 < 0 || input1 < 0 && input2 > 0 {
        uy = -remainder;
    } else {
        uy = remainder;
    }

    println!("Whole Remainder: {}", uy);
    println!("Exponentiation:	{}", input1.pow(input2 as u32));
}
```

This Rust program first takes two integers from the user, then calculates their sum, difference, product, integer quotient, and remainder in a similar way to your Python code. The remainder is calculated differently because Rust's `%` operator returns the same sign as its first operand. 

For integer division (which matches the behavior of Python's `//` operator), Rust uses the `/` operator on integers, which performs floor division, which rounds down to the nearest whole number towards zero. The `int(rr)` in your Python code is equivalent to just using the floor division operator `//` in Rust.

For exponentiation (which matches the behavior of Python's `**` operator), we use the `pow()` method on integers, which returns a new value that represents the first operand raised to the power of the second operand. The `input1 as u32` cast is necessary because the `pow()` method requires an unsigned integer as its exponent. 

Note: This Rust code assumes all inputs are valid positive or negative integers. You may need additional error handling if that's not the case in your application.
