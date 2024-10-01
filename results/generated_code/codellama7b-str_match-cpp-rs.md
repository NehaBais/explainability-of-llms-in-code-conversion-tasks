In Rust, you can use the `str` module to perform various string operations. Here's an example of how you could implement the above C++ code in Rust:
```
use std::str;

fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if str::starts_with(s1, s3) {
        println!("{} starts with {}", s1, s3);
    } else {
        println!("{} does not start with {}", s1, s3);
    }

    // End
    if str::ends_with(s1, s3) {
        println!("{} ends with {}", s1, s3);
    } else {
        println!("{} does not end with {}", s1, s3);
    }

    // Anywhere
    let location = s2.find(s3);
    if location == std::string::npos {
        println!("{} was not found in {}", s3, s2);
    } else {
        println!("{} was found at location {} in {}", s3, location, s2);
    }
}
```
Note that Rust does not have a built-in `find` function for strings like C++, but you can use the `str::find` function from the `std::str` module to perform the same operation. Additionally, Rust uses the `==` operator to compare strings instead of `strcmp`, and it also provides a convenient method for checking if a string starts or ends with another string using the `starts_with` and `ends_with` functions.

Also note that in Rust, you can use the `std::string::npos` constant to represent the position returned by `find` when the substring is not found in the string, whereas in C++, you would have to return a negative value to indicate this.
