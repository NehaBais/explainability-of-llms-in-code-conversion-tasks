The following code is the equivalent of your Golang code written in Rust:

```rust
use std::str;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    // For reference
    println!("Index:  01234567");
    println!("String: {}", s);

    // starting from n characters in and of m length
    println!("Start {}, length {}:  {}", n, m, &s[n..n+m]);

    // starting from n characters in, up to the end of the string
    println!("Start {}, to end:   {}", n, &s[n..]);

    // whole string minus last character
    let len = s.len();
    println!("All but last:        {}", &s[0..len-1]);

    // starting from a known character within the string and of m length
    if let Some(dx) = s.find('D') {
        println!("Start 'D', length {}:  {}", m, &s[dx..dx+m]);
    } else {
        println!("'D' not found in the string");
    }

    // starting from a known substring within the string and of m length
    if let Some(sx) = s.find("DE") {
        println!(`Start "DE", length {}: {}`, m, &s[sx..sx+m]);
    } else {
        println!("\"DE\" not found in the string");
    }
}
```

In Rust, strings are UTF-8 by default. However, if you want to convert a `&str` (a reference to a string slice) into a `String`, you can use `.to_string()` method. Also note that in the indexing operator of String, we use 0-based index which is different from the Go's 1-based index.
