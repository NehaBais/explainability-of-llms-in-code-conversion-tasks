Sure! Here's the equivalent Rust code for the given function:
```
fn bitwise(a: i32, b: i32) -> () {
 println!("a and b: {}", a & b);
 println!("a or b: {}", a | b);
 println!("a xor b: {}", a ^ b);
 println!("not a: {}", !a);
 println!("a << n: {}", a << b); /* left shift */
 println!("a >> n: {}", a >> b); /* on most platforms: arithmetic right shift */
 /* convert the signed integer into unsigned, so it will perform logical shift */
 let c = a as u32;
 println!("c >> b: {}", c >> b); /* logical right shift */
 return ();
}
```
Note that I've used the `i32` and `u32` types for representing signed and unsigned integers respectively. The `as` operator can be used to convert a value of one type to another. In this case, we're converting `a` from an `i32` to an `u32`.
I hope this helps! Let me know if you have any further questions.

