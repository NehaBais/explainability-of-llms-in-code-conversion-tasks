extern crate regex;
use regex::Regex;

fn main() {
    let stringA = "tacoloco";
    let stringB = "co";

    // 1. String starts with another string
    assert!(stringA.starts_with(stringB));

    // 2. String contains another string at any location
    let re = Regex::new(stringB).unwrap();
    let matches = re.find_iter(&stringA);

    println!("2: Is '{}' contained in '{}'? ", stringB, stringA);
    if matches.any(|m| true) {
        println!(
            "Yes, at index {}.",
            matches
                .map(|m| m.start())
                .collect::<Vec<usize>>()
                .join(", ")
        );
    } else {
        println!("No.");
    }

    // 3. String ends with another string
    assert!(stringA.ends_with(stringB));
}
