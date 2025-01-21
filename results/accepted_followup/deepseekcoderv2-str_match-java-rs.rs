fn main() {
    let s1 = "abcd";
    let s2 = "ab";
    let s3 = "zn";
    let s4 = "bb";
    let s5 = "abab";

    // 1. Determining if the first string starts with the second string
    println!("{}", s1.starts_with(s2)); // returns true

    // 2. Determining if the first string contains the second string at any location
    let loc = find_substring(&s4, "abab");
    println!("{}", loc); // returns -1

    let loc = find_substring(&s5, "ab");
    println!("{}", loc); // returns 0

    let mut loc = find_substring(&s5, "bb");
    if loc != -1 {
        loc = find_substring_from(&s5[..], &s5[loc + 2..], "ab");
    }
    println!("{}", loc); // returns 2

    // 3. Determining if the first string ends with the second string
    println!("{}", s1.ends_with(s3)); // returns false
}

fn find_substring(haystack: &str, needle: &str) -> isize {
    let len = haystack.len();
    for i in 0..len {
        if &haystack[i..i + needle.len()] == needle {
            return i as isize;
        }
    }
    -1
}

fn find_substring_from(haystack: &str, from: &str, needle: &str) -> isize {
    let len = from.len();
    for i in 0..len {
        if &from[i..i + needle.len()] == needle {
            return (i + haystack.find(from).unwrap()) as isize;
        }
    }
    -1
}
