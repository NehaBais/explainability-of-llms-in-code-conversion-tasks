Rust does not have a built-in substring function, but the `[start..end]` syntax can be used to achieve similar functionality. However, the Rust standard library does provide a `str` method called `starts_with`, which allows you to check if the first string starts with the second one. The implementation for this is as follows:

let q1 = stringA.starts_with(stringB);

To handle multiple occurrences of a string, you can use the `find` method on an iterator, combined with the `map` function to extract the indices from the iterator. Here's how you can implement it in Rust:

let q2matches: Vec<_> = stringA
    .chars()
    .enumerate()
    .filter(|(_, &c)| c == stringB.chars().next())
    .map(|(i, _)| i)
    .collect();

The `filter` method returns an iterator of pairs `(index, item)`, where the index corresponds to the position in the string and the item is the character at that position. The `enumerate` function adds indices to each pair of characters. We then apply a filter to select only those pairs where the second element (`&c`) is equal to the first character of the search string (`stringB`). Finally, we map the resulting iterator to extract the indices and collect them into a vector.
Finally, the `substr` method in Rust can be used for substring extraction. However, it takes an index and a length as arguments, not a range. Therefore, we need to use the `len()` function first to get the length of the search string. We then subtract 1 from this length (to convert from one-based indexing to zero-based indexing) and pass this value as the second argument to `substr`. Here's how you can implement it in Rust:

let q3 = stringA.ends_with(stringB);

To handle multiple occurrences of a string, there is no built-in function for this in Rust. You can create your own custom search function or use an existing crate like `regex` that provides a regex-based solution to find all occurrences of a pattern within a string. Here's how you would implement it using the `regex` crate:

use regex::Regex;
let re = Regex::new(stringB).unwrap();
let q2matches = re.find_iter(&stringA).map(|m| m.start()).collect::<Vec<_>>();

You can find more information about the `regex` crate in its [documentation](https://docs.rs/regex/1.3.6/regex/). The `find_iter` function returns an iterator of matches, and we use the `map` function to extract the start indices from each match. Finally, we collect the results into a vector.
You can find more information about Rust's string manipulation functions in its [API documentation](https://doc.rust-lang.org/std/primitive.str.html).
Here is the complete code converted to Rust:
```rust
use regex::Regex;
fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    let q1 = stringA.starts_with(stringB);
    let q2 = stringA.find(stringB).unwrap();
    let q2matches: Vec<_> = stringA
        .chars()
        .enumerate()
        .filter(|(_, &c)| c == stringB.chars().next())
        .map(|(i, _)| i)
        .collect();
    let q3 = stringA.ends_with(stringB);

    println!("1: Does '{}' start with {}? {}", stringA, stringB, if q1 { "Yes." } else { "No." });
    println!("2: Is '{}' contained in {}? {}", stringB, stringA, if ~q2 { format!("Yes, at index {}.", q2) } else { "No.".to_string() });
    if ~q2 && !q2matches.is_empty() {
        println!(
            "   In fact, it happens {} times within '{}', at indices: {}",
            q2matches.len(), stringA, q2matches.join(", ")
        );
    }
    println!("3: Does '{}' end with {}? {}", stringA, stringB, if q3 { "Yes." } else { "No." });
}
```
Note that Rust does not have any built-in support for multiple lines in a string literal like JavaScript. Therefore, the strings `"tacoloco"` and `"co"` are written as single-line strings. The Rust `println!` macro also has some limitations when it comes to formatting. For example, you can't directly use the curly braces notation for string interpolation. You need to format the values using the `.format()` method. Also, the conditional operator (`if ~q2 { ... } else { ... }`) is not supported in Rust, so we have used an `if-else` statement instead. Finally, you will also need to escape single quotes and double quotes inside string literals if they're being used as part of the text.
Please keep in mind that Rust's `main` function is different from JavaScript's `document.onload`. In JavaScript, `onload` fires once the HTML document has been completely loaded and parsed. The `main` function in Rust is the entry point to your program and does not require any HTML elements or event listeners.

use regex::Regex;
fn main() {
    let stringA = "tacoloco";
    let stringB = "co";
    let q1 = stringA.starts_with(stringB);
    // ... rest of the code is same as before
}

