## Solution:
```rust
fn main() {
    let s = String::from("abcdefgh");
    println!("Substring: {}", &s[2..5]); // Output: Substring: cde
}

fn substr_from(str: &String, n: usize) -> String {
    str.chars().skip(n).collect()
}

fn substr_to(str: &String, n: usize) -> String {
    str.chars().take(n).collect()
}

fn substr_until(str: &String, n: usize) -> String {
    str.chars().skip(n + 1).collect()
}

fn substr_after(str: &String, n: char) -> String {
    if let Some(index) = str.find(n) {
        str[index..].to_string()
    } else {
        String::new()
    }
}

fn main() {
    let s1 = String::from("abcdefgh");
    println!("Substring from index: {}", substr_from(&s1, 2)); // Output: Substring from index: cde

    let s2 = String::from("abcdefgh");
    println!("Substring until end of string: {}", substr_to(&s2, 5)); // Output: Substring until end of string: abcdefg

    let s3 = String::from("abcdefgh");
    println!("Whole string minus last character: {}", substr_until(&s3, 0)); // Output: Whole string minus last character: abcdefg

    let s4 = String::from("abcdefgh");
    println!("Substring after character 'b': {}", substr_after(&s4, 'b')); // Output: Substring after character 'b': bcdefgh
}
```
## Explanation
`substr()` is a string method that extracts and returns a substring of the original string. The parameters are an optional starting index (n) and the number of characters to extract (m). If m is not specified, it will take all characters from the given start index until the end of the string. If either parameter is negative or out of bounds, it will return an empty string.
`substr_from()`, `substr_to()`, `substr_until()` and `substr_after()` are functions that perform similar tasks but with different ways to specify the starting point for the substring extraction. They take a string slice (`str`) and an index or character as parameters, respectively, and return a new string containing the desired substring.
## How does this code work?
The substr() method in JavaScript is used to extract a part of the original string and returns it as a new string. The starting position (n) and length (m) are specified in the parameter list. If m is not provided, the method will return all characters from the given start index until the end of the string.
The substr_from() function takes an input string slice (`&str`) and an index `usize`, which represents the starting position for extraction. The substring is then created by skipping over the specified number of characters using the chars().skip() method, followed by collecting the resulting iterator into a new String. If the provided start index exceeds or equal to the length of the string, it will return an empty string as there are no characters left after that point in the original string.
The substr_to() function is similar to substr_from(), but instead of skipping over specified number of characters from the beginning of the input string, it only considers characters up until and including a given index position specified by `n`. This means all remaining characters after this position will be included when forming the substring result.
The substr_until() function is another variation that extracts characters starting at an offset of n from the original string's start point (or beginning). It does not consider any trailing or leading whitespace during extraction process and returns everything except for the last character in the original input string as part of the output.
