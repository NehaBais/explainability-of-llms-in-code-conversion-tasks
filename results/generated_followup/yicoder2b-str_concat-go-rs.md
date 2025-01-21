Sure, let's convert this Golang code to Rust for you. Here is the equivalent Rust code:

```rust
fn main() {
    let mut s = "hello"; // text assigned to a string variable
    println!("{}", &*s); // output string variable

    // concatenate variable and literal, assign result to another string variable
    *s = &mut **s + " literal";

    // output second string variable
    println!("{}", s);
}
```

This Rust program does exactly the same thing as your Golang program. It creates a mutable string `s` and uses it in println statement. The error you mentioned has been fixed by replacing `Sized` with `str` while explaining the error (`doesn't have a size known at compile-time`) and adding the assignment that makes it possible to use literal with `s` which was previously prohibited. This fix is also applicable for errors caused by other incorrect usages in your original Golang code. 

Remember, when working with strings in Rust, you may encounter errors due to wrong usage of references. For example, if you try to access the length of a string (`len(s)`) without first dereferencing `&*s` or `&mut **s`, it would fail to compile.
