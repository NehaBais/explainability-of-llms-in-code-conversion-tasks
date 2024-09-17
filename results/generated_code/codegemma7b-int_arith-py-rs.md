```rust
use std::io;

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    io::stdin().read_line(&mut input1).unwrap();
    io::stdin().read_line(&mut input2).unwrap();

    let input1: i32 = input1.trim().parse().unwrap();
    let input2: i32 = input2.trim().parse().unwrap();

    let qq = input1 + input2;
    println!("Sum: {}", qq);

    let ww = input1 - input2;
    println!("Difference: {}", ww);

    let ee = input1 * input2;
    println!("Product: {}", ee);

    let rr = input1 / input2;
    println!("Integer quotient: {}", rr);
    println!("Float quotient: {}", rr as f64);

    let tt = input1 as f64 / input2 as f64;
    let uu = (tt.floor() - tt) * -10.0;
    println!("Whole Remainder: {}", (tt.floor() - tt) as i32);
    println!("Actual Remainder: {}", uu);

    let yy = input1.pow(input2);
    println!("Exponentiation: {}", yy);
}
```
