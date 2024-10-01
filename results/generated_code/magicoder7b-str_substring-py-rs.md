 Rust doesn't have built-in methods for handling strings as smoothly as Python does, but we can achieve similar functionality using string indexing and methods provided by Rust. Here is the conversion of the given Python code to Rust:

```rust
fn main() {
    let s = String::from("abcdefgh");
    let (n, m) = (2, 3);
    let char: &str = "d";
    let chars: &str = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n..n+m]);

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n..]);
    
    // whole string minus last character;
    println!("{}", &s[0..s.len() - 1]);
    
    // starting from a known character char within the string and of m length;
    let index = s.find(char).unwrap();
    println!("{}", &s[index..index+m]);

    // starting from a known substring chars within the string and of m length; 
    let index = s.find(chars).unwrap();
    println!("{}", &s[index..index+m]);
}
```
Please note that Rust uses 0-based indexing, so we have to adjust the indices accordingly.
