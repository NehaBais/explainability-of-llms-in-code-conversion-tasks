fn main() {
    let s1 = "abcd";
    let s2 = "ab";

    // Determining if the first string starts with second string
    println!("Starts with: {}", s1.starts_with(s2)); // returns true

    // Determining if the first string contains the second string at any location
    println!("Contains: {}", s1.contains(s2)); // returns false

    // Determining if the first string ends with the second string
    println!("Ends with: {}", s1.ends_with(s2)); // returns false

    // Optional requirements:
    // 1. Print the location of the match for part 2
    // 2. Handle multiple occurrences of a string for part 2.

    // Part 2: Find all locations of substring in the main string.
    let mut loc = -1;
    while let Some(index) = s1.find(s2) {
        if index != loc {
            println!("Match found at index: {}", index);
        }
        loc = index + s2.len();
    }

    // Part 3: Find all locations of substring starting from the given location.
    loc = 0;
    while let Some(index) = s1.find(s2, loc) {
        if index != loc {
            println!("Match found at index: {}", index);
        }
        loc += s2.len();
    }
}