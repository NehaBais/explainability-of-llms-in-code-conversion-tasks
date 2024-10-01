```rust
let string_a = "tacoloco";
let string_b = "co";

// 1. Does string_a start with string_b?
let q1 = string_a.starts_with(&string_b);

// 2. Is string_b contained in string_a?
let q2 = string_a.contains(&string_b);

// 3. Does string_a end with string_b?
let q3 = string_a.ends_with(&string_b);

// 2. (Optional) Print the location of the match
if q2 {
    println!("String B is located at position {}", string_a.find(&string_b).unwrap());
}

// 2. (Optional) Handle multiple occurrences of a string
let q2_matches = string_a.match_indices(&string_b).map(|(i, _)| i);

if !q2_matches.is_empty() {
    println!("String B occurs {} times at positions: {:?}", q2_matches.len(), q2_matches);
}

println!("1. Does '{}' start with '{}'? {}", string_a, string_b, q1);
println!("2. Is '{}' contained in '{}'? {}", string_b, string_a, q2);
println!("3. Does '{}' end with '{}'? {}", string_a, string_b, q3);
```


