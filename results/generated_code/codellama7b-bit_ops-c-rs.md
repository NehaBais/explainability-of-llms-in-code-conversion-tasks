
Here's the Rust equivalent of the given code:

```
fn bitwise(a: i32, b: i32) -> i32 {
    let c = a as u32; // Convert signed integer into unsigned to perform logical right shift.
    let and_result = a & b;
    let or_result = a | b;
    let xor_result = a ^ b;
    let not_result = !a;
    let left_shift = a << b; // Left shift
    let arithmetic_right_shift = a >> b; // Arithmetic right shift (on most platforms)
    let logical_right_shift = c >> b; // Logical right shift
    println!("a and b: {}", and_result);
    println!("a or b: {}", or_result);
    println!("a xor b: {}", xor_result);
    println!("not a: {}", not_result);
    println!("a << n: {}", left_shift);
    println!("a >> n: {}", arithmetic_right_shift);
    println!("c >> b: {}", logical_right_shift);
    0
}
```
Note that the `bitwise` function takes two `i32` arguments `a` and `b`, performs various bitwise operations on them, and returns an integer result. The `println!` macro is used to print the results of each operation to the console. The `as` keyword is used to convert `a` from an `i32` to a `u32`, which allows for performing logical right shift operations.

Also note that there are no rotation operators in Rust, so we use the bitwise shifts and notations to perform rotations instead.
