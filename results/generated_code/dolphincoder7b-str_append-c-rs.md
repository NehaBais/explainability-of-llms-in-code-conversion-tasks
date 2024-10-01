Rust does not have the `sprintf` function as in C, so instead of using it, we can use concatenation with `+` operator or `format!` macro. Here is how you would write the equivalent code in Rust:

```rust
fn main() {
    let str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    if str.capacity() > str.len() + cstr.len() + cstr2.len() {
        // 1st method
        let new_str: String = format!("{}{}", str, cstr);

        println!("{}", new_str);

        // 2nd method
        let mut str: Vec<u8> = str.into_bytes();
        str.extend(cstr2.as_bytes());
        str.extend(" ".as_bytes()); // Assuming spaces were meant between the original string and "to all"
        
        println!("{}", String::from_utf8(str).unwrap());
    }
}
```

Note that `cstr` and `cstr2` are now `String` literals because Rust does not support raw strings in C style. Also, we use `format!` to concatenate the string literals with the original `str`. This is more idiomatic than using `+` operator, which may cause performance issues if it leads to excessive memory allocation. 

When appending a string literal to a buffer of fixed size, we need to ensure that the capacity is sufficient to accommodate both the existing content and the new content. If not, we'll have to manually reallocate the buffer or simply append the new content at the end of it if it fits in the remaining space. Rust provides various methods for string manipulation like `push_str`, `insert` etc., which should be used where possible instead of raw string concatenation and allocation.

For more information on string handling in Rust, check out the book: [The Rust Programming Language](https://doc.rust-lang.org/stable/book/string.html)
