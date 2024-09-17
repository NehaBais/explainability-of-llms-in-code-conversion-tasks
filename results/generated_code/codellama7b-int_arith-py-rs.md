```
use std::io;

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
    let rr = input1 / input2;
    println!("Integer quotient: {}", int(rr));

    // float quotient
    let tt = float(input1, input2);
    println!("Float quotient: {}", tt);

    // whole remainder (rounding towards zero)
    let uu = int(tt) - float(tt);
    println!("Whole Remainder: {}", uu * -10.0);

    // actual remainder (sign matches the sign of the first operand)
    let yy = input1 ** input2;
    println!("Exponentiation: {}", yy);
}
```
Note that this code assumes that the inputs are valid integers and will not handle errors if the user enters invalid data. It also assumes that you want to use Rust's default rounding behavior for integer division, which is towards zero. If you want a different rounding behavior or more robust input handling, you may need to modify the code accordingly.
