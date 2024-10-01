Rust has built-in support for Unicode handling, which can make it simpler to work with substrings of any character length. However, we need to be careful when using indices and lengths because Rust uses UTF-8 encoding internally. Each code point (Unicode scalar value) may consist of multiple bytes.

Here's a similar program in Rust:

```rust
fn main() {
    let s = "ABCDEFGH";
    let n: usize = 2;
    let m: usize = 3;
    
    // for reference
    println!("Index: 01234567");
    println!("String: {}", s);
    
    // starting from n characters in and of m length
    let substring1 = &s[n..n+m];
    println!("Start {} length {}:      {:?}", n, m, substring1);
    
    // starting from n characters in, up to the end of the string
    let substring2 = &s[n..];
    println!("Start {} to end:        {}", n, substring2);
    
    // whole string minus last character
    let substring3 = &s[0..s.len()-1];
    println!("All but last:          {:?}", substring3);
    
    // starting from a known character within the string and of m length
    if let Some(dx) = s.find('D') {
        let substring4 = &s[dx..dx+m];
        println!("Start 'D' length {}:     {:?}", m, substring4);
    }
    
    // starting from a known substring within the string and of m length
    if let Some(sx) = s.find("DE") {
        let substring5 = &s[sx..sx+m];
        println!("Start \"DE\" length {}:  {:?}", m, substring5);
    }
}
```

This Rust code does essentially the same thing as your Golang version. It displays substrings starting from various positions and lengths based on different conditions.

Please note that in Rust, string indexing with `&str[n..n+m]` is not bound-checked, unlike the case in Python or JavaScript, so make sure you're using valid indices to avoid runtime errors.

Additionally, it's important to be aware of how Rust handles Unicode code points internally. While the standard library provides functionality for working with strings in a way that takes UTF-8 encoding into account, directly manipulating string slices at the byte level can lead to issues if not handled carefully.
