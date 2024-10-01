 Here is the equivalent Rust code for your C++ code:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    
    // Part 1 - Beginning
    if &s1[0..s3.len()] == s3 {
        println!("String starts with '{}'", s3);
    } else {
        println!("String does not start with '{}'", s3);
    }
    
    // Part 2 - Anywhere
    let pos = s1.find(s2);
    
    if pos != None {
        println!("Found '{}' at location {}", s2, pos.unwrap());
        
        for i in (pos.unwrap() + 1..).step_by(s3.len()) {
            let rest = &s1[i..];
            
            if rest == s3 {
                println!("Found '{}' again at location {}", s2, i);
                break;
            }
        }
    } else {
        println!("String does not contain '{}'", s2);
    }
    
    // Part 3 - End
    if &s1[s1.len()-s3.len()..] == s3 {
        println!("String ends with '{}'", s3);
    } else {
        println!("String does not end with '{}'", s3);
    }
}
```
