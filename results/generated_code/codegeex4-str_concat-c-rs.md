Rust has a built-in String type that supports string concatenation. Note that in Rust, you don't have to worry about memory deallocation since it's handled by the ownership system.

Here is the equivalent code in Rust:

```rust
fn sconcat(s1: &str, s2: &str) -> String {
    format!("{}{}", s1, s2)
}

fn main() {
   let s = "hello";
   println!("{}", s);
   
   let s2 = sconcat(&s, " literal");
   println!("{}", s2);
}
```

The `format!` macro in Rust is similar to the `printf` function in C. It returns a new String which contains a formatted version of its arguments.

Please note that you need to add `println!("...");` instead of `printf(...);` to print strings in rust.
