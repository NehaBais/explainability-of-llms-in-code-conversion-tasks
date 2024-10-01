Rust does not have a built-in function to display substrings of the string directly like Golang's `Substr`. However, using slices we can achieve similar results. Here is the equivalent code in Rust:

```rust
use std::io;

fn main() {
    let s = String::from("ABCDEFGH");
    let n = 2; // Starting from position n
    let m = 3; // length of substring

    println!("Index:  01234567");
    println!("String: {}", s);

    // Starting from n characters in and of m length
    println!("Start {} length {}:     {}", n, m, &s[n..n+m]);

    // Starting from n characters in, up to the end of the string
    println!("Start {} to end:       {}", n, &s[n..]);

    // Whole string minus last character
    println!("All but last:         {}", &s[..len(&s)-1]);

    // Starting from a known character within the string and of m length
    let dx = s.find('D').unwrap();
    println!("Start 'D', length {}:   {}", m, &s[dx..dx+m]);

    // Starting from a known substring within the string and of m length
    let sx = s.find("DE").unwrap();
    println!("Start \"DE\", length {}:  {}", m, &s[sx..sx+m]);
}
```

In this code, `String::from` creates a new String from a string literal. The `find` method searches for the given substring and returns its index, which is then used to slice the original string using range syntax. 

Note: In Rust, slices are references to parts of the string. They don't own the actual data so they can't be modified directly. However, you can convert a slice into a String by calling `to_string` on it. Also note that the `Substr` function doesn't exist in Golang and must be implemented by yourself using slicing.

In Rust, strings are Unicode compatible by default. It handles any valid Unicode code point, whether in the Basic Multilingual Plane or above it. The program can work with UTF-8 and UTF-16 encodings (both 8-bit and 16-bit).

I hope this helps! Let me know if you need further assistance!
