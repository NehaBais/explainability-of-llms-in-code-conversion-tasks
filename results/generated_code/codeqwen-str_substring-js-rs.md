Rust doesn't have built-in methods for working with Unicode strings, so we need to use some external crates like unicode-segmentation and unicode-width. Here is how you can implement the code:

```rust
use std::str;

fn substring(input: &str, n: usize, m: Option<usize>) -> String {
    let mut chars = input.chars().skip(n);
    match m {
        Some(length) => chars.take(length).collect(),
        None => chars.collect()
    }
}

fn main() {
    let str = "abcdefgh";
    println!("{}", substring(&str, 2, Some(3))); // => "cde"
    println!("{}", substring(&str, 2, None));   // => "cdefgh"

    if let Some(index) = str.find('b') {
        println!("{}", substring(&str, index, Some(3))); // => "bcd"
    }
}
```

Here is how it works:

- The function `substring` takes a string slice (`&str`), an offset `n`, and an optional length `m`. It uses the `skip` method to skip the first `n` characters, and then the `take` method to take up to the `m`th character.
- If `m` is `None`, it takes all remaining characters.
- The result of `substring` is collected into a new `String`.

In this code we used `chars()` method to convert the string into an iterator over its Unicode scalar values (which are the building blocks of UTF-32), and then skipped `n` elements and took up to `m` elements. The result is collected into a new String using the `collect` method.

For `find` we simply use `str.find('b')` which returns an optional index of 'b'. We then print out the substring starting from that index with length 3 using the same logic as before.
