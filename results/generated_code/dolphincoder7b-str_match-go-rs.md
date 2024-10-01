Rust does not have a built-in function for string manipulation as in C/C++, so we will use an external crate for this functionality. For this, we will need to add the following dependency to our `Cargo.toml` file:

[dependencies]
regex = "1"

Then, we can convert the code to Rust using the `rust_2018` feature:
```rust
use regex::Regex;

fn match(first: &str, second: &str) {
    println!("1. {} starts with {}: {}", first, second, first.starts_with(second));

    let re = Regex::new(&format!("(?<={}", second)).as_str()).unwrap();
    for cap in re.find_iter(&first) {
        println!("2. {} contains {} at location {}.", &first, &second, cap.start() + 1);
    }
    
    println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}

fn main() {
    match("abracadabra", "abr");
}
```
Note that I used a regular expression to match `second` in the string `first`. We use regex crate's `Regex::new()` function to create a pattern which matches `second` anywhere in `first`, and then we iterate over each match using `find_iter()`. In Rust, indexing strings is not permitted because they are immutable. So, instead of adding the starting index of each match to find its location, I add 1 to each match's starting index to get the desired output.
In this case, you would need to call `match()` function with the arguments `"abracadabra"` and `"abr"`. You can add more test cases as needed.
