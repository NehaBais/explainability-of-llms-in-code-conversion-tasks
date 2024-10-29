In Rust, the equivalent code would be:

Note that error handling for substrings is not included as it's out of scope and will require more detail about how you want to handle potential errors.

Also note that string indexing in Rust does not refer to character boundaries but rather byte positions, so UTF-8 encoded strings can have characters of any length and need extra care when handling them. The following code assumes an input is a valid UTF-8 string.
```rust
fn main() {
    let s = "0123456789";
    
    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456";
 
    println!("{}", &s[n..n+m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..(s.len()-1)]);
    println!("{}", &s[s.find(c).unwrap()..(s.find(c).unwrap()+m)]) ;
    println!("{}", &s[s.find(sub).unwrap()..(s.find(sub).unwrap()+m)]);
} 
```
This code does not work with a string slice that contains multi-byte Unicode characters, as it's based on byte indexing. If you need to support those cases, then you would have to use the `unicode-segmentation` crate which handles Unicode grapheme clusters (a rough equivalent of code points), or other approaches depending on your exact requirements and constraints.

