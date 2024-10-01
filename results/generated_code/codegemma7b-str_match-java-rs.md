```rust
let str1 = "abcd";
let str2 = "ab";

// 1. Determining if the first string starts with second string
let starts_with = str1.starts_with(str2);
println!("Starts with: {}", starts_with); // Output: Starts with: true

// 2. Determining if the first string contains the second string at any location
let contains = str1.contains(str2);
println!("Contains: {}", contains); // Output: Contains: true

// 3. Determining if the first string ends with the second string
let ends_with = str1.ends_with(str2);
println!("Ends with: {}", ends_with); // Output: Ends with: false

// 4. Print the location of the match for part 2
let location = str1.find(str2);
if let Some(loc) = location {
    println!("Location: {}", loc); // Output: Location: 0
}

// 5. Handle multiple occurrences of a string for part 2
let locations = str1.match_indices(str2);
for (i, _) in locations {
    println!("Multiple Occurrence Location: {}", i); // Output: Multiple Occurrence Location: 2
}
```
