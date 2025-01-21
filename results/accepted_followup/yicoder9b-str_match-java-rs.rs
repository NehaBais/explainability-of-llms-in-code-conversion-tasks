fn main() {
    let s1 = "ababcd";
    let s2 = "ab";
    let mut pos = 0;

    // Determine if first string starts with second string
    println!("Does {} start with {}? {}", s1, s2, s1.starts_with(s2));

    // Determine multiple occurrences of the second string in the first string
    while let Some((start, _)) = s1[pos..].find(s2) {
        let found = pos + start;
        println!("{} found at position {} in {}", s2, found, s1);
        pos = found + 1; // Skip the already found string to find next occurrence
    }

    // Determine if first string ends with second string
    let e1 = "abcd";
    let e2 = "cd";
    println!("Does {} end with {}? {}", e1, e2, e1.ends_with(e2));
}