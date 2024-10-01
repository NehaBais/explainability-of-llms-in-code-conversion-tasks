Sure, here is how you can write this in Rust:

Firstly, let's define the types for our variables and then we define our functions to convert a substring from a specific index within a string. We will also need to create helper function for getting the length of substring which we could pass as an argument or use the built-in `str::len` function to calculate it.

```rust
fn substr(s: &String, n: usize, m: usize) -> String {
    if s.len() < n + m {
        return "".to_string();
    }
    let start = &s[n..n + m];
    *start
}

fn main() {
    let str = "abcdefgh";
    println!("{:?}", substr(&str, 2, 3));  // => "cde"
    println!("{:?}", substr(&str, 0, str.len()));  // => "abcdefgh"
    println!("{:?}", substr(&str, str.find('b').unwrap(), 1)); // => "b"
    println!("{:?}", substr(&str, str.find("bc").unwrap(), 3));  // => "bcd"
}
```
Please note that indexing in Rust starts from `0` and we're assuming the string is UTF-8 or UTF-16 encoded. If you want to handle other encodings like ASCII then please use `ascii::AsciiExt` traits. 

Also remember to include `std::collections::StringExt` if you need substring related functionality in Rust that is not built-in, for example finding substrings using the `find()` method.
