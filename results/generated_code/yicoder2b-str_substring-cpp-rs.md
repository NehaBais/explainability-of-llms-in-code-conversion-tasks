Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";

    println!("{}", &s[n..m]);
    println!("{}", &s[n..]);
    println!("{:?}", &s[0..s.len()-1]);
    if let Some(&i) = s.chars().find(|&ch| ch == c) {
        println!("{}", &s[i..m]);
    }
    if let Some(&start_index) = s.find(*sub) {
        println!("{}{}", &s[start_index..start_index + m as usize]);
    }
}
```
Please note that:
- Indexing syntax in Rust is more flexible and allows negative indices.
- When using `chars()` method to iterate over characters of a string, it will return an iterator which gives you the location of each character instead of the character itself, so we need to dereference it when comparing with `c` or `sub`.
- If `s.find(*sub)` returns `Some(x)`, this means that `s` contains substring starting from x. We convert the result to integer (`x`) and use as an index for our `s[i..]` range to get m characters.
