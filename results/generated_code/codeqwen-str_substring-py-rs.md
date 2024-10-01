The equivalent Rust code for the given Python code is as follows:

```rust
fn main() {
    let mut s = String::from('abcdefgh');
    let n = 2;
    let m = 3;
    let char_str = 'd';
    let chars_str = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n-1..n+m-1]);

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n-1..]);

    // whole string minus last character;
    println!("{}", &s[..s.len() - 1]);

    // starting from a known character char="d" within the string and of m length;
    let indx = s.find(char_str).unwrap();
    println!("{}", &s[indx..indx+m]);

    // starting from a known substring chars="cd" within the string and of m length;
    let indx = s.find(chars_str).unwrap();
    println!("{}", &s[indx..indx+m]);
}
```

This Rust code will print the substrings as required, using the indexing syntax similar to Python but with a slight change in handling the indices. The `find()` method is used to find the first occurrence of the character or substring in the string and return its position as an `usize`.
