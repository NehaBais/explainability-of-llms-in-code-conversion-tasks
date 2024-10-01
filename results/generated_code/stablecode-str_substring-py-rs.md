The equivalent Rust code for the given Python code would look like this:

```rust
fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n-1..n+m-1].to_string()));

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n-1..].to_string()));

    // whole string minus last character;
    println!("{}", &s[..-1].to_string()));

    // starting from a known character char="d" within the string and of m length;
    let index = s.find(char).unwrap();
    println!("{}", &s[index..index+m].to_string()));

    // starting from a known substring chars="cd" within the string and of m length.
    let index = s.find(&chars).unwrap();
    println!("{}", &s[index..index+m].to_string()));
}
```
This Rust program performs the same functionalities as your provided Python code snippet: it reads a string, then prints out different slices of this string according to specific parameters.
