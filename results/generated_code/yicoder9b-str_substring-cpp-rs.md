Here is the equivalent Rust code:

```rust
fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456".to_string();

    println!("{}", &s[n..n+m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..s.len()-1]);
    let c_pos = s.chars().enumerate().find_map(|(&i, char)| if char == c { Some(i) } else { None });
    if let Some(c_pos) = c_pos {
        println!("{}", &s[c_pos..c_pos+m]);
    }
    let sub_pos = s.find(&sub[..]).unwrap(); 
    println!("{}", &s[sub_pos..sub_pos+m]);
}
```

Please note that Rust's string slicing is a bit different from C++ because the character indexing in Rust is based on byte positions and not Unicode code points. Therefore when working with UTF-8 strings, we need to enumerate over characters (`s.chars()`) first before getting their indices so as to avoid accessing middle of a multi-byte Unicode character which would lead to decoding errors or wrong results. The code above should work correctly for all Unicode strings if the `c` and `sub` are valid in `s`. 

You can adjust it according your needs, this is just an example that shows how you might approach slicing a string by characters with Rust.
