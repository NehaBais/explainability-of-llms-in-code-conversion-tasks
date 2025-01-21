The error occurs because the `unicode-segmentation` crate hasn't been added to the dependencies of the project and Rust can't find the `graphemes` method in the current scope.

To fix this, add `unicode-segmentation = "1.8"` under `[dependencies]` in your Cargo.toml file and then run `cargo build`.

Here is the corrected code -

```rust
use unicode_segmentation::UnicodeSegmentation;

fn substring(str: &str, n: usize, m: Option<usize>) -> String {
    let mut iter = str.graphemes(true).skip(n);
    match m {
        Some(m) => iter.take(m).collect(),
        None => iter.collect(),
    }
}

fn main() {
    let str = "abcdefgh";

    println!("{}", substring(str, 2, Some(3))); // cde

    println!("{}", substring(str, 2, None)); // cdefgh

    println!("{}", substring(str, 0, Some(str.len() - 1))); // abcdefg

    for c in 'b'..'d' {
        println!(
            "{}",
            substring(&str[str.find(c).unwrap_or(0)..], 0, Some(3))
        ); // bcd
    }
}
```
