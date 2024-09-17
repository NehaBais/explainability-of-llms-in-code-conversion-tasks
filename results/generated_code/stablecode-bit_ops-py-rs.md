Here is the equivalent Rust code for the given Python code:

```rust
fn bitwise_built_ins(width: u32, a: u64, b: u64) {
    let mask = ((1 << width) - 1) as u64;

    println!("AND:\t\t0b{a:0{width}b}} 
            & 0b{b:0{width}b}}
            = 0b{(a & b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "OR:\t\t0b{a:0{width}b}} 
            | 0b{b:0{width}b}}
            = 0b{(a | b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "XOR:\t\t0b{a:0{width}b}} 
            ^ 0b{b:0{width}b}}
            = 0b{(a ^ b) & mask :0{width}b}}",
        a = a,
        b = b,
        width = width,
    );

    println!(
        "NOT:\t\t~ 0b{a:0{width}b}}
            = 0b{(~a) & mask :0{width}b}}",
        a = a,
        width = width,
    );
}

fn rotl(x: u64, n: u32) -> u64 {
    let mut result = x;

    for _ in 0..n {
        result = (result << 1) | (result & 0x555555555555555) | (result & 0x33333333333333));
    }

    result
}

fn main() {
    bitwise_built_ins(8, 27, 125);
}
```

This Rust code performs the same bitwise operations as the provided Python code.

The `bitwise_built_ins` function takes four arguments: `width`, `a`, `b`, and `c`. These arguments represent the width of the numbers to be manipulated, as well as the values of the numbers (`a`, `b`, and `c`) to be used in the bitwise operations.

The `bitwise_built_ins` function then performs the following bitwise operations on the provided number pairs:
- AND operation: `a & b`
- OR operation: `a | b`
- XOR operation: `a ^ b`
These operations are performed using the bitwise operators (`&`, `|`, and `^`) in Rust.

The resulting manipulated numbers for each of the above mentioned operations are then printed out to the console.

The `rotl` function is also provided, which performs a left rotation operation on a given number. This function takes two arguments: `x`, which represents the number to be rotated, and `n`, which represents the number of positions to rotate the number by. The `rotl` function then performs the left rotation operation using bitwise operators in Rust.

The resulting manipulated numbers for each of the provided functions are then printed out to the console.
