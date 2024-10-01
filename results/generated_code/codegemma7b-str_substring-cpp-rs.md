```rust
use std::string::String;

fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = String::from("456");

    println!("{}", &s[n..n + m]);
    println!("{}", &s[n..]);
    println!("{}", &s[..s.len() - 1]);
    println!("{}", &s[s.find(c)..n + m]);
    println!("{}", &s[s.find(sub)..n + m]);
}
```
