The errors occurred because Rust does not have built-in functions for rounding towards zero or handling floating point division, unlike Python.
To fix these errors, you can use the `std::num::Wrapping` struct to perform integer division and rounding towards zero, and use the `f64::floor()` method to get the whole remainder. Here is the corrected code:
```rs
use std::io;
use std::num::Wrapping;

fn main() {
    let mut input1 = String::new();
    io::stdin().read_line(&mut input1).unwrap();
    let input1 = input1.trim().parse().unwrap();

    let mut input2 = String::new();
    io::stdin().read_line(&mut input2).unwrap();
    let input2 = input2.trim().parse().unwrap();

    // sum
    let qq = input1 + input2;
    println!("Sum: {}", qq);

    // difference
    let ww = input1 - input2;
    println!("Difference: {}", ww);

    // product
    let ee = input1 * input2;
    println!("Product: {}", ee);

    // integer quotient (rounding towards zero)
    let rr = Wrapping(input1) / Wrapping(input2);
    println!("Integer quotient: {}", int(rr));

    // float quotient
    let tt = (input1 as f64) / input2;
    println!("Float quotient: {}", tt);

    // whole remainder (rounding towards zero)
    let uu = Wrapping((tt.floor() - tt) * -10.0);
    println!("Whole Remainder: {}", int(uu));

    // actual remainder (sign matches the sign of the first operand)
    let yy = input1 * *input2;
    println!("Exponentiation: {}", yy);
}
```
