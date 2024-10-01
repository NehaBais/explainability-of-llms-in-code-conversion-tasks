Sure, here's the equivalent Rust code:

```rust
use std::string;

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
println!("{}", s1.starts_with(&s3)); // True
// Ending
println!("{}", s1.ends_with(&s3)); // False
// Anywhere
println!("{}", s2.contains(&s3)); // True
let loc = s2.find(&s3).unwrap();
println!("Location of match for part 2 is {}", loc); // Location of match for part 2 is 0
let loc2 = s2.find(&s3, loc + 1).unwrap();
println!("Second location of match is {}", loc2); // Second location of match is 2
```

To handle multiple occurrences and print the locations, you can use the `find` method with an additional parameter to specify the starting index:

I'll note that the Rust `string` type has a `contains` method which does essentially what you wrote in your original C++ code for part 2. However, if you want to perform multiple occurrences or find all matches, the `find` method with an additional parameter can be used. The `unwrap` function is used here because we are calling `find` without checking for errors - if it returns `None`, it panics. If you need to handle potential errors more gracefully, you should use something like `match`.

Also note that Rust uses a zero-based index system while C++ uses a 1-based one. This is why you'll need to increment the `loc` value in part 2 by 1 when using it with `find`.
