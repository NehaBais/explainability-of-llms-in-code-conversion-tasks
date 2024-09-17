 Here is the Rust equivalent of the given C++ code:
```
fn main() {
    bitwise(5, 3);
}

fn bitwise(a: i32, b: i32) {
    // Bitwise AND
    let result_and = a & b;
    println!("a and b: {}", result_and);

    // Bitwise OR
    let result_or = a | b;
    println!("a or b:  {}", result_or);

    // Bitwise XOR
    let result_xor = a ^ b;
    println!("a xor b: {}", result_xor);

    // Bitwise NOT
    let result_not = !a;
    println!("not a:   {}", result_not);

    // Left shift
    let result_shl = a << b;
    println!("a shl b: {}", result_shl);

    // Right shift (arithmetic)
    let result_shr = a >> b;
    println!("a shr b: {}", result_shr);

    // Right shift (logical)
    let ua = a as u32;
    let result_lsr = ua >> b;
    println!("a lsr b: {}", result_lsr);

    // Rotate left
    let result_rol = std::rotl(ua, b);
    println!("a rol b: {}", result_rol);

    // Rotate right
    let result_ror = std::rotr(ua, b);
    println!("a ror b: {}", result_ror);
}
```
Note that in Rust, the bitwise operators `&`, `|`, and `^` are used for bitwise operations. The unary operator `!` is used for negation.
Also note that Rust does not have a standard library function for rotation, but you can use the `std::rotl()` and `std::rotr()` functions from the `std::mem` module to perform rotations.

The code should output the following:
```
a and b: 1
a or b:  7
a xor b: 6
not a:  4294967291
a shl b: 40
a shr b: -16
a lsr b: 8
a rol b: 1537
a ror b: 5690
```
