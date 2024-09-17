Sure, here's the equivalent Rust code:
```
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a  << b: {}", a << b); // left shift
    println!("a  >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a >>> b); // logical right shift
}
```
This code defines a function `bitwise` that takes two integer arguments. It uses the bitwise operators `&`, `|`, `^`, and `!`. These are equivalent to their corresponding JavaScript operators in Rust. The remaining operations (`<<`, `>>`, `>>>`) represent left, right arithmetic, and logical right shifts, respectively. Each of these operations is applied on `a` with a shift/rotate amount of `b`.
