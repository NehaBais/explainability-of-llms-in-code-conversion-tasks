fn main() {
    let s1 = "abcd";
    let s2 = "ab";

    // Check if s1 starts with s2
    let is_startsWith = s1.starts_with(s2);
    println!("{} starts with {}: {}", s1, s2, is_startsWith);

    // Check if s1 contains s2 at any location
    let is_contains = s1.contains(s2);
    println!("{} contains {}: {}", s1, s2, is_contains);

    // Check if s1 ends with s2
    let is_endswith = s1.ends_with(s2);
    println!("{} ends with {}: {}", s1, s2, is_endswith);

    // Print the location of the match for part 2
    fn find_and_print(s: &str, target: &str) {
        let loc = s.find(target).unwrap();
        println!("Location of {} in {}: {}", target, s, loc);
    }

    let s3 = "abab";
    let s4 = "bb";
    find_and_print(s3, s4); // Location of bb in abab: 0

    let s5 = "abab";
    let s6 = "ab";
    find_and_print(&s5, &s6); // Location of ab in abab: 0

    let s7 = "abab";
    let s8 = "ab";
    let loc = s7.find(s8).unwrap() + 1;
    find_and_print(&s7, &s8); // Location of ab in abab: 2
}
