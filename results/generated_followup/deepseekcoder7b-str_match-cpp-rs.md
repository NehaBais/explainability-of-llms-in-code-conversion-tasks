The errors occur because of incorrect usage of closure patterns in Rust. They expect types, not references to types or expressions that evaluate to them.

Here's how you can fix it:

```rs
fn main() {
    let s1 = "abcd";
    let s3 = "ab";
    
    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));
        
    // Determining if the first string ends with the second string
    assert!(s1.ends_with(s3));
      
    // Determining if the first string contains the second string at any location
    let default_pos: usize = 0;
    
    for (pos, c) in s1.chars().enumerate() {
        if c == 'a' {
            println!("Found at position: {}", pos + default_pos); 
        }
    }
}
```
This code should now work as expected, finding the occurrences of `'a'` in the string and printing their positions. The `contains` method is used to check if s2 is a substring of s1 (equivalent to C++ find), but it returns an iterator over matches which can be used for further manipulations if needed.

