use std::cmp::Ordering;

println!(
    "abcd" == "abcd", // true
    "abcd" === "abcd", // true
    123 == "123", // false
    123 === "123", // false
    "ABCD" == "abcd", // false
    "ABCD" != "abcd", // true
    123 != "123", // false
    123 !== "123", // true
    "abcd" < "dcba", // true
    "abcd" > "dcba", // false
    "ABCD".to_lowercase() == "abcd".to_lowercase(), // true (case insensitive)
);
