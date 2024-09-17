 In Rust, you can use the `io` module for reading the user's input. Here is an equivalent code in Rust:

```rust
use std::io;

fn main() {
    let mut input1 = String::new();
    print!("Enter first number: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input1).expect("Failed to read line");
    let _input1: i32 = input1.trim().parse().unwrap();

    let mut input2 = String::new();
    print!("Enter second number: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input2).expect("Failed to read line");
    let _input2: i32 = input2.trim().parse().unwrap();

    let qq = _input1 + _input2;
    println!("Sum: 		  {}", qq);
    
    let ww = _input1 - _input2;
    println!("Difference: 	  {}", ww);
    
    let ee = _input1 * _input2;
    println!("Product: 	  {}", ee);
    
    let rr = _input1 / _input2;
    println!("Integer quotient: {}", rr as i32);
    println!("Float quotient:   {:.1}", rr as f64);
    
    let tt = (f64::from(_input1)) / (_input2 as f64);
    let uu = ((tt - tt.floor()) * 10.0).round()*-1.0;
    println!("Whole Remainder:  {}", uu as i32);
    println!("Actual Remainder: {:.1}", uu as f64);
    
    let yy = _input1.pow(_input2 as u32);
    println!("Exponentiation:   {}", yy);
}
```
This script reads two integers from the user, performs the requested operations, and prints out their results. It uses `io::stdin().read_line(&mut input)` to read a line of text (which it assumes is an integer) from the standard input and then parses that string into an i32 using the `parse()` function. If there's any error in this parsing, it prints out a "Failed to read line" message and panics with `expect`.

This script uses the Rust Standard Library for I/O operations. The print and println functions are used for standard output while input is taken using io::stdin().read_line(&mut input). This function reads a line from the standard input, where it assumes that each line of text corresponds to an integer which can be parsed into i32 type. If there's any error in parsing, it prints out "Failed to read line" and panics with `expect`.

For the exponentiation operator (`**` in Rust), the `pow()` method is used which takes two arguments - one being a u32 (unsigned 32-bit integer) representing the power, and another being an i32 (integer). The `_input1.pow(_input2 as u32)` function converts the second input to an unsigned 32-bit integer before calling `pow()`.

As for the quotient rounding towards zero or towards negative infinity, it depends on the programming language you are using. For instance, in Python, the behavior is determined by how you cast float numbers to int, but in Rust this aspect is not as flexible because it does not have a separate type for integers and floats unlike Python. It is generally common practice in Rust to explicitly convert float numbers to their nearest integer equivalent using `as i32` or `as f64`.

The remainder sign can be determined by the sign of either input2, as both will have the same sign if they are different (the negative one having its magnitude increased by 1), so in this script, it only prints out whether the actual remainder has a positive sign. You might want to include a check for when input1 and input2 have different signs too, but that is not included here.
