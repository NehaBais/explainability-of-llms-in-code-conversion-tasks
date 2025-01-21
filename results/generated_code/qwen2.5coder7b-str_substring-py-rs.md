In Rust, you can use the `chars` method to work with individual Unicode characters (code points) instead of 8-bit code units for UTF-8 or 16-bit code units for UTF-16. Here's how you can translate your Python code into Rust:

```rust
fn main() {
    let s = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char_search = 'd';
    let chars_search = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n..n + m]);

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n..]);

    // whole string minus last character;
    println!("{}", &s[..s.len() - 1]);

    // starting from a known character char="d" within the string and of m length;
    let mut indx = None;
    for (i, c) in s.char_indices() {
        if c == char_search {
            indx = Some(i + char_search.len_utf8());
            break;
        }
    }

    if let Some(indx_start) = indx {
        println!("{}", &s[indx_start..indx_start + m]);
    } else {
        println!("Character not found");
    }

    // starting from a known substring chars="cd" within the string and of m length.
    let mut indx = None;
    for (i, c) in s.char_indices() {
        if &s[i..i + chars_search.len()] == chars_search {
            indx = Some(i + chars_search.len());
            break;
        }
    }

    if let Some(indx_start) = indx {
        println!("{}", &s[indx_start..indx_start + m]);
    } else {
        println!("Substring not found");
    }
}
```

### Explanation:
1. **Starting from `n` characters in and `m` in length**:
   - In Rust, we use slicing to extract the substring.
   - The indices are 0-based, so if you want to start from index `2`, you would use `&s[2..5]`.

2. **Starting from `n` characters in, up to the end of the string**:
   - This can be done with a similar slicing operation: `&s[2..]`.

3. **Whole string minus last character**:
   - You can use slicing to get all but the last character: `&s[..s.len() - 1]`.

4. **Starting from a known character and of `m` length**:
   - We iterate over the characters with `char_indices()` which gives us both the index and the character.
   - Once we find the character, we calculate the start index for the substring.

5. **Starting from a known substring and of `m` length**:
   - Similar to finding a single character, but we compare slices instead: `&s[i..i + chars_search.len()]`.
   - If the substring is found, we calculate the start index for the substring.

This code should work correctly with any valid Unicode code point in the Basic Multilingual Plane or above it.
