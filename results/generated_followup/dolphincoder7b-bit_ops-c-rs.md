The error occurs because Rust requires a `main` function to execute the code. In C, there is no entry point for the program like in C++ or Java which makes it easier to integrate with other systems. However, to fix this issue, you can add a dummy `main` function and use `std::process::exit(0)` to exit the program.
To explain the error in a single line, it means that Rust is not able to find the `main` function when compiling your code. The fix involves adding a dummy `main` function.

To rewrite the corrected code in a single code block:
```rust
fn main() {
    bitwise(10, 5);
}

fn bitwise(a: i32, b: i32) {
    println!("a and b:  {}", a & b);
    println!("a or b:  {}", a | b);
    println!("a xor b:  {}", a ^ b);
    println!("not a:  {}", !a);
    println!("a  << n:  {}", a  << b); // left shift
    println!("a  >> n:  {}", a  >> b); // on most platforms: arithmetic right shift
    let c = a as u32;
    println!("c  >> b:  {}", c  >> b);  // logical right shift
                                     /* there are no rotation operators in Rust  */
}
```