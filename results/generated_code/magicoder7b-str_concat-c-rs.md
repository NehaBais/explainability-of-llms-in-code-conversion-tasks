 In Rust, you can use the format! macro to perform string manipulations similar to printf. Here is an equivalent code in Rust:

```rust
fn sconcat(s1: &str, s2: &str) -> String {
    let mut result = s1.to_string();
    result.push_str(s2);
    result
}

fn main() {
   let s = "hello";
   println!("{} literal", s);
   // or 
   println!("{}{} literal", s, "");

   let s2 = sconcat(s, " literal");
   println!("{}", &s2);
}
```
In this Rust code:
- Instead of the `printf` function, we use `println!` to print to the console.
- We use `&str` for strings that are only read and do not require ownership, just like in C.
- In Rust, strings (like `s`) are not mutable by default. To modify them we need to make them mutable (`let mut s = "hello";`).
- There's no need for a separate function to concatenate strings in Rust because it has built-in functionality for that. We use the `push_str` method to append a string slice to an existing string (`result.push_str(s2);`), and the `to_string` method to convert a string slice into a `String`.
- Finally, we don't need to free the memory allocated by `sconcat`, because in Rust this is automatically handled when the `String` goes out of scope at the end of `main()`.
