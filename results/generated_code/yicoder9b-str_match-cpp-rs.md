Here is the equivalent Rust code for your C++ program:

```rust
fn main() {
    let s1 = String::from("abcdabab");
    let s2 = String::from("ab");
    
    //Beginning
    if s1.starts_with(&s2[..]) {
        println!("{} starts with {}", s1, s2);
    } 
    
    //End
    if s1.ends_with(&s2[..]) {
        println!("{} ends with {}", s1, s2);
    }
    
    //Anywhere
    let mut loc = s1.find(&s2[..]);
    while let Some(i) = loc {
        println!("{} found at index {} in {}", s2, i, s1); 
        loc = s1[i + 1..].find(&s2[..]);
    }       
}
```

This Rust code does exactly the same as your C++ program: It checks if `s1` starts with or ends with `s2`, and it also finds all occurrences of `s2` in `s1`. 

Please note that you will need to adjust this code based on what exactly you want to do with the matching locations (`loc`) - currently, I've just printed them out for demonstration purposes.
