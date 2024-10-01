In Rust, there is no direct equivalent for the `startswith` and `endswith` methods in Python. However, you can achieve similar results using `starts_with()` and `ends_with()`.

Here's how you can convert the code:

```rust
fn main() {
    let str1 = "abcd";
    let str2 = "ab";

    if str1.starts_with(str2) {
        println!("First string starts with second string");
    } else {
        println!("First string doesn't start with second string");
    }

    if str1.contains(str2) {
        println!("First string contains second string");
    } else {
        println!("First string does not contain second string");
    }

    let loc = str1.find(str2);
    match loc {
        Some(_) => println!("Location of match is {}", loc),
        None => println!("No location of match found"),
    };
}
```

Please note that the Rust standard library doesn't have `endswith()` method, so we are using `starts_with()` instead. This means that if you need to check for string endswith, you would have to implement it yourself (or use a third-party crate like the `str-ends` crate). 

In addition, there is no direct equivalent for finding multiple occurrences of a substring in Rust. However, using a loop and `find()` method, you can achieve similar results:


    let mut loc = str1.find(str2);
    while loc != None {
        println!("Location of match is {}", loc);
        // Move to next occurrence
        loc = str1.find(str2, loc + 1);
    }


The above code will print the locations of all occurrences of `str2` in `str1`. If you only want to find one location, you can remove the loop and break out of it when finding the first occurrence (just like you would do in Python). 

If your original requirement doesn't provide for printing the locations or handling multiple matches, you don't need to implement any additional code. However, if you have a specific use case that requires these features, feel free to add them as per your requirements.
