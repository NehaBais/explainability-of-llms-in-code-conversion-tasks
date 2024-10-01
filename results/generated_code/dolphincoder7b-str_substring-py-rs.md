This is an interesting problem, as Rust doesn't have direct support for operations on strings or Unicode code points. Here's a solution in Python that works with UTF-8 encoding and uses the `str` data type to represent a string. It also makes use of various methods available in the standard library such as `find`, `index`, `rfind`, `rindex`.

```rust
fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";

    // Starting from n characters in and m length.
    println!("{}", &s[n-1..n+m]);

    // Starting from n characters in, up to the end of the string.
    println!("{}", &s[n..]);

    // Whole string minus last character.
    println!("{}", &s[..s.len()-1]);

    let indx = s.find(char);
    if indx >= 0 {
        // Starting from a known character char="d" within the string and of m length;
        println!("{}", &s[indx..indx+m]);
    }

    let indx = s.rfind(chars);
    if indx >= 0 {
        // Starting from a known substring chars="cd" within the string and of m length.
        println!("{}", &s[indx..indx+m]);
    }
}
```

In Rust, to use `str` you need to import it at the start of your program: `use std::str;`
This code will work with any valid UTF-8 string or Unicode code point. Please note that this won't work with strings that have more than one byte per character due to the inherent limitations of Rust's string type. For those cases, you might want to look into using another data structure such as a vector of bytes (e.g., `Vec<u8>`).
