
Here's the Rust equivalent of the Python code you provided:
```rust
fn main() {
    let width = 8;
    let a = 27;
    let b = 125;

    // Bitwise AND, OR, and XOR on two integers
    println!("Bitwise AND:");
    println!("a & b = {}", a & b);
    println!("a | b = {}", a | b);
    println!("a ^ b = {}", a ^ b);

    // Bitwise NOT on the first integer
    println!("Bitwise NOT:");
    println!("~a = {}", ~a);

    // Shifts and rotates
    println!("Shifts and rotates:");
    println!("a >> 1 = {}", a >> 1);
    println!("a << 1 = {}", a << 1);
    println!("rotr(width, a, n) = {}", rotr(width, a, 1));
    println!("rotl(width, a, n) = {}", rotl(width, a, 1));

    // Arithmetic shift right (sign preserving)
    println!("Arithmetic shift right:");
    println!("asr(width, a, n) = {}", asr(width, a, 1));
}

fn bitwise_built_ins(width: u8, a: i32, b: i32) {
    let mask: i32 = (1 << width) - 1;
    println!("a & b = {}", a & b);
    println!("a | b = {}", a | b);
    println!("a ^ b = {}", a ^ b);
}

fn rotr(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        rotl(width, a, -n)
    } else {
        a >> (n % width)
    }
}

fn rotl(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        a << (-n % width)
    } else {
        a << (n % width)
    }
}

fn asr(width: u8, a: i32, n: i32) -> i32 {
    if n < 0 {
        ((a >> (-n % width)) | ((1 << width) - 1)) as i32
    } else {
        (a >> (n % width)) as i32
    }
}
```
Note that in Rust, the bitwise operators `&`, `|`, and `^` are defined for all numeric types, including integers. Therefore, we don't need to specify the type of the operands explicitly. Additionally, Rust has built-in support for integer overflow checking, which is not enabled by default in Python. So, if you want to use an integer with a large value that might cause an overflow in Python, you need to enable it manually in Rust using the `overflowing_add` or other similar functions provided by the `num::traits` module.

Also, note that Rust does not have a built-in equivalent of the `hex()` function from Python, so you would need to use the `format!` macro to print out the hexadecimal representation of an integer. For example:
```rust
let x = 0x12345678;
println!("{}", format!("{:X}", x)); // prints "12345678"
```
In Rust, you can also use the `num::BigInt` type to represent arbitrarily large integers. However, this is not a built-in type in Python, so if you need to work with integers that are too large for the standard integer types, you would need to use a library such as `gmpy2`.
