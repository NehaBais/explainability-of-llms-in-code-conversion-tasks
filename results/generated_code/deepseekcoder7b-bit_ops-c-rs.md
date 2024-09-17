In Rust, you can perform bitwise operations using the corresponding keywords & (and), | (or), ^ (xor), ~ (not) and <<(left shift). However, unlike in C, there is no built-in right arithmetic shift. The standard library provides bitwise operators but it's not as straightforward to use them with a variable amount of shift, similar to how you would do in C.

Here’s an equivalent Rust code:
```Rust
fn bitwise(mut a: i32, b: u32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);
    
    // Conversion to unsigned for right shift and rotation. 
    let c = a as u32;

    println!("c >> b: {}", c >> b);  /* logical right shift */

    println!("a << b: {}", a << b);  /* left shift */
    
}
```
Please note that in Rust, the bitwise NOT operator (~) is not equivalent to C. In Rust's version of ~x it will give you x-1 but this can be different according to your architecture and compiler. So I used !a instead which gives a similar behavior as in C.

Also note that we have to convert signed integer 'a' into unsigned before performing logical right shift (similar to arithmetic right shift of C). You cannot directly perform the same operation on two different types, so you need to explicitly cast one of them to match the other. 

In addition, please be aware that println!("{:?}", expression) is used in Rust to display the result of expressions like bitwise operators' results for easier interpretation. If it were an integer number and not a boolean or some other type, you can simply use "{}" as well.

