fn main() {
    let s1 = "abcd";
    let s2 = "ab";

    // Determine if first string starts with second string
    println!("Does {} start with {}? {}", s1, s2, s1.starts_with(s2));

    // Determine if the first string contains the second string at any location
    if let Some((_, found)) = s1.find(s2) {
        println!(
            "{} does contain {} and starts at position {}",
            s1, s2, found
        );
    } else {
        println!("{} does not contain {}", s1, s2);
    };

    // Determine if the first string ends with the second string.
    let e1 = "abcd";
    let e2 = "cd";
    println!("Does {} end with {}? {}", e1, e2, e1.ends_with(e2));
}
