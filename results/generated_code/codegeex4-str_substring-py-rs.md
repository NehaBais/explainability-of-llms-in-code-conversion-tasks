In Rust, we can use the `unicode-segmentation crate` for UTF-8 handling as it provides tools to work with Unicode logical characters.

Here is how your Python code would look like in Rust:

```rust
use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char = 'd';
    let chars = "cd";

    // starting from n=2 characters in and m=3 in length
    println!("{}", &s[unicode_segmentation::UnicodeStr::new(&s)[n-1..n+m-1].collect::<String>());

    // starting from n characters in, up to the end of the string
    println!("{}", &s[unicode_segmentation::UnicodeStr::new(&s)[n-1..].collect::<String>());

    // whole string minus last character;
    println!("{}", s.trim_end_matches("\u{0}"));

    let mut chars = s.char_indices();
    // starting from a known character char="d" within the string and of m length
    if let Some((pos, _)) = chars.find(|&(_, c)| c == char) {
        print!("{}", &s[pos..pos+m]);
    }

    // starting from a known substring chars="cd" within the string and of m length. 
    if let Some(pos) = s.find(chars) {
        print!("{}", &s[pos..pos+m]);
    }
}
```

Note: `trim_end_matches("\u{0}")` is used to remove the last character as Rust string doesn't provide an easy way to do that similar to Python. The `unicode-segmentation` crate should be included in your `Cargo.toml` file:

[dependencies]
unicode-segmentation = "1.9.0"

This code handles the requirements of starting from n characters in and of m length, up to the end of the string, whole string minus last character, starting from a known character within the string and of m length, and starting from a known substring within the string and of m length.
