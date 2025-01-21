Sure! Here is the equivalent Rust code for the given C routine:

```rust
fn bitwise(a: i32, b: i32) {
    let c = a as u32; // Convert to unsigned for logical right shift

    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);

    let left_shift = (a << b) as i32; // Perform left shift
    let right_shift = a >> b; // Perform arithmetic right shift
    let logical_right_shift = c >> b as u32; // Perform logical right shift

    println!("a << n: {}", left_shift);
    println!("a >> n: {}", right_shift);
    println!("c >> b: {}", logical_right_shift);

    // Implement left rotate and right rotate manually
    let bit_size = 32; // For 32-bit integers

    let left_rotate = (a.rotate_left(b as u32)) as i32;
    let right_rotate = (a.rotate_right(b as u32)) as i32;

    println!("a rotate left n: {}", left_rotate);
    println!("a rotate right n: {}", right_rotate);
}

fn main() {
    bitwise(10, 2); // Example usage
}
```

### Explanation:
1. **Bitwise Operations**: The Rust `&`, `|`, and `^` operators perform bitwise AND, OR, and XOR respectively.
2. **Bitwise NOT**: The `!` operator performs a bitwise NOT on the first integer.
3. **Shifts**:
   - Left shift (`<<`): Shifts the bits of the number to the left by the specified amount.
   - Arithmetic right shift (`>>`): Shifts the bits of the number to the right by the specified amount, preserving the sign bit for negative numbers.
   - Logical right shift: To perform a logical right shift on a signed integer in Rust, we first convert it to an unsigned type and then back to a signed type after shifting.
4. **Rotations**:
   - Left rotate (`rotate_left`): Rotates the bits of the number to the left by the specified amount.
   - Right rotate (`rotate_right`): Rotates the bits of the number to the right by the specified amount.

This code should provide a similar output as the original C function but in Rust.
