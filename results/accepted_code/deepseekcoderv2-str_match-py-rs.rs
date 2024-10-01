fn main() {
    let str1 = "abab";
    let str2 = "ab";

    // Starts with method for string matching
    if str1.starts_with(str2) {
        println!("{} starts with {}.", str1, str2);
    } else {
        println!("{} does not start with {}.", str1, str2);
    }

    // Ends with method for string matching
    if str1.ends_with(str2) {
        println!("{} ends with {}.", str1, str2);
    } else {
        println!("{} does not end with {}.", str1, str2);
    }

    // Find method for string matching
    let loc = find_substring(str1, str2);
    if loc == -1 {
        println!("Substring '{}' was not found in '{}'.", str2, str1);
    } else {
        println!(
            "Location of first occurrence of '{}' in '{}': {}",
            str2, str1, loc
        );
    }
}
