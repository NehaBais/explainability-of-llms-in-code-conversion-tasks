Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";
    //Start
    println!("{}", s1.starts_with(&s3));
    //End
    println!("{}", &s1[&s1.len() - s3.len() as isize..] == &s3);
    //Anywhere
    let loc = s2.find(s3).unwrap_or(s2.len()); //returns usize
    println!("{}", s2[loc + 1..] == &s3);
}
```
Note that the find method returns an Option which is `Some` if there is a match and `None` otherwise. Therefore, to use it correctly we call `unwrap_or` to default to the length of the string if no match found. Also the range check is done using 2nd argument of "==" operator. 
Remember that Rust indexing syntax uses 0-based indexing just like in C++. So when you want to compare the last part of a string, you should use `s1.len() - s3.len()` and not `s1.size()-s3.size()`.
