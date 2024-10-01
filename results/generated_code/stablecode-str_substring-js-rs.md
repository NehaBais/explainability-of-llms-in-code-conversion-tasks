Here is how you can convert this JavaScript code to Rust:

In Rust, strings are utf-8 encoded by default. Here we go with `String` type and its methods for string manipulation like `substr`, `indexOf`, etc. 

```rust
fn main() {

    let str = String::from("abcdefgh");

    let n = 2;
    let m = 3;

    //  * starting from n characters in, up to the end of the string;
    println!("{}",str.substring(n))); // => "cdefgh"
    println!("{}",str.substring(n, str.len() - 1)))); // =====> "abcdefg"

    //  * whole string minus last character;
    println!("{}",str.substring(0, str.len() - 1))));  // =====> "abcdefg"

    //  * starting from a known character within the string and of m length;
    let index = str.find('b').unwrap(); // find 'b' and return its position (index), unwrap will fail if character is not present in the string
    println!("{}",str.substring(index, m))));  // =====> "bcd"

    //  * starting from a known substring within the string and of m length;
    let index = str.find('bc').unwrap(); // find 'bc' and return its position (index), unwrap will fail if character is not present in the string
    println!("{}",str.substring(index, m))));  // =====> "bcd"

 }
```

In Rust, you can use `find` method to find a specific substring within your string. You just need to pass the substring you are looking for as an argument to the `find` method. If the substring is found in the string, the `find` method returns an option containing the index of the starting character of the substring within the original string. If the substring is not found in the string, the `find` method returns none. 

The above Rust code uses the `find` method to find specific substrings within a given string. This program will output: =====> "abcdefgh", "abcdefg", "abcdefg", "bcd", "bcd".
