Here is how you can write the same code in Rust:

```rust
use std::cmp;
use std::iter;

fn bitwise(a: isize, b: usize) {
    println!("a and b: {}", a & b);
    println!("a or b:  {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a:   {}", !a);

    println!("a shl b: {}", a << b);
    println!("a shr b: {}", a >> b);
    
    let mut ua = a;
    println!("a lsr b: {}", (ua as u64) >> b);

    println!("a rol b: {}", rotate_left(ua, b));
    println!("a ror b: {}", rotate_right(ua, b));
}

fn rotate_left(x: isize, n: usize) -> isize {
    let bits = std::mem::size_of::<isize>() * 8;
    x.rotate_left(cmp::min(n, bits))
}

fn rotate_right(x: isize, n: usize) -> isize {
    let bits = std::mem::size_of::<isize>() * 8;
    x.rotate_right(cmp::min(n, bits))
}
```
Rust does not have bitwise rotation operators, so you need to implement them yourself. The `rotate_left` and `rotate_right` functions are implemented as rotations on the binary representation of an integer.

One important note is that Rust's `std::mem::size_of::<isize>() * 8` gives the number of bits in a `isize`, which is the size of the pointer on your machine (32 bits for a 32 bit system and 64 bits for a 64 bit system). The function then takes the minimum of this value and the rotation amount to ensure that it does not exceed the available number of bits. This is necessary because if you try to rotate by more than the number of bits in an integer, Rust will panic.

Also note that `isize` and `usize` are signed and unsigned respectively, while in your C++ code `int` is signed by default. So when dealing with bitwise operations, be aware of whether your numbers can be negative or not.
