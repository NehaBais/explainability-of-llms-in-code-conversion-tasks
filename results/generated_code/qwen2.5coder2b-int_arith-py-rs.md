Sure, here is the equivalent Rust code for your Python program. Note that in Rust, division of integers results in a floating point number so we don't need to check for integer quotient and remainder explicitly as you did in Python.

```rust
fn main() {
    // Get two integers from user
    let mut input1 = 18;
    // let input1 = i32::from_str(&input).unwrap();
    let input2 = 7;
    // let input2 = i32::from_str(&input).unwrap();

    // Calculate the sum, difference, product
    let qq = input1 + input2;
    let ww = input1 - input2;
    let ee = input1 * input2;

    // Calculate the float quotient and remainder of division
    let rr = input1 as f64 / input2 as f64;
    let tt = 0.0 - (input1 as f64 % input2 as f64);

    // Calculate the whole remainder (round towards zero)
    let uu = (tt.round() as i32) * -10;

    // Calculate the actual remainder
    let uu = tt - tt.floor();

    // Calculate exponentiation
    let yy = input1.pow(input2);

    println!("Sum: 		  " + &qq.to_string());
    println!("Difference: 	  " + &ww.to_string());
    println!("Product: 	  " + &ee.to_string());
    println!("Integer quotient: " + &rr.to_string());
    println("Float quotient:   " + &tt.to_string());
    println("Whole Remainder:  " + &uu.to_string());
    println("Actual Remainder: " + &uu.to_string());
    println!("Exponentiation:   " + &yy.to_string());
}
```

In the Rust code:
- We use `input1 as f64 / input2 as f64` to perform floating-point division.
- For remainder, we use `tt - tt.floor()` because `.round()` rounds towards nearest whole number.
- To get the integer quotient, we use `(tt.round() as i32) * -10`.
- We use `.pow(input2)` for exponentiation.

This code should behave similarly to your Python code.
