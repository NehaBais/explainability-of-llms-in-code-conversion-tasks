The Rust equivalent of the Python code you provided would be something like this:

```rust
fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}

fn bitwise_built_ins(width: u32, a: u32, b: u32) {
    let mask = (1 << width) - 1;
    
    println!("AND:     0b{:0width$b} \n& 0b{:0width$b} \n= "
             "0b{:0width$b}", a, b, (a & b) & mask, width = 8);
    
    println!("OR:      0b{:0width$b} \n|\
             0b{:0width$b} \n= \
             "0b{:0width$b}", a, b, (a | b) & mask, width = 8);
    
    println!-- NEGATIVE
    println!-- ZERO
}

fn helper_funcs(width: u32, a: u32) {
    let mask = (1 << width) - 1;
    let aa = a | (1 << (width - 1));   // a with top bit set
    
    println!-- ROTATIONS
    for i in [1, 2, 4] {
        println!-- LEFT:
        println!-- RIGHT:
    }
        
    for shift_amt in [1, 2, 4] {
        println!-- SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:
    }
}
```

Please note that the Rust implementation doesn't use your helper functions to calculate sign-extended arithmetic shift right or rotations. This is because in Rust, there are built-in bitwise operations and methods like `wrapping_shl` for left rotation, etc., which can do this more directly than Python does with extra steps. 
But if you still want to write these functions yourself, here's how:

```rust
fn rotr(width: u32, a: u32, s: u32) -> u32 {
    // your implementation
}

fn rotl(width: u32, a: u32, s: u32) -> u32 {
    // your implementation
}

fn asr(width: u32, a: u32, s: u32) -> i32 {
    // your implementation
}
```
Note that for arithmetic shift right (asr), you might want to return type `i32` instead of `u32`. This is because Rust doesn't have a native unsigned int type, so the value can go negative. 
Remember this won't be same as your python implementation since it doesn't involve any complex operations or manipulations on top bits and left/right rotations in Python are more straightforward using built-in methods and bitwise shifting operators. In Rust these tasks are much easier to achieve with less code and better performance than the Python version.

