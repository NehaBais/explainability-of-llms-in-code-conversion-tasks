
Here's the Rust code for the given Python script:

```rust
fn main() {
    let s: &str = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char: &str = "d";
    let chars: &str = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", s[n-1..n+m-1]);

    // starting from n characters in, up to the end of the string;
    println!("{}", s[n-1..]);

    // whole string minus last character;
    println!("{}", s[..s.len() - 1]);

    // starting from a known character char="d" within the string and of m length;
    let indx: usize = s.find(char).unwrap();
    println!("{}", s[indx..indx+m]);

    // starting from a known substring chars="cd" within the string and of m length;
    let indx: usize = s.find(chars).unwrap();
    println!("{}", s[indx..indx+m]);
}
```
The `usize` type is used to store the length of a string in Rust, while the `&str` type is used to reference strings. The `find` method is used to find the index of a substring within a string and return its starting position.
