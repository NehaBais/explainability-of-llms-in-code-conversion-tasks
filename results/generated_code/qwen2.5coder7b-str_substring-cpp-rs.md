In Rust, we can use the `chars` method to access logical Unicode code points and then collect them into strings. Here's how you could write the equivalent program:
```rust
fn main() {
  let s = "0123456789";

  let n = 3;
  let m = 4;
  let c = '2';
  let sub = "456";

  let mut iter = s.chars().skip(n).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let mut iter = s.chars().skip(n);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let mut iter = s.chars().take(s.len() - 1);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let start_index = s.find(c).unwrap(); 
  let mut iter = s.chars().skip(start_index).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let start_index = s.find(sub).unwrap();
  let mut iter = s.chars().skip(start_index).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);
}
```
This program will output the same results as your C++ version. The `find` method on a string returns an `Option<usize>` which may be unwrapped to get the index at which the character or substring is found. If the character/substring is not found, `unwrap` will cause a panic.
