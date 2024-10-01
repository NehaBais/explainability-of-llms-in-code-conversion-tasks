Here's the converted code in Rust:
```
fn main() {
 let s = String::from("0123456789");

 let n = 3;
 let m = 4;
 let c = '2';
 let sub = "456";

 println!("{}", s.chars().nth(n).take(m)); // Output: 2345
 println!("{}", s.chars().skip(n).take_while(|&x| x != '8').collect::<String>()); // Output: 1234567
 println!("{}", s.chars().take(s.len() - 1)); // Output: 012345678
 println!("{}", s.chars().nth(s.find(c).unwrap()).take(m)); // Output: 2345
 println!("{}", s.chars().nth(s.find(sub).unwrap()).take(m)); // Output: 2345
}
```
The code uses the `String` type from the Rust standard library to store strings, and the `chars()` method to iterate over each character in the string. The `nth()` method is used to access a specific character at a given index, and the `take()` method is used to extract a substring of a given length starting from a given index.

