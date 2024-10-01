fn main() {
    let first_str = "abcd";
    let second_str = "ab";
    println!("{}", first_str.starts_with(second_str)); // true

    let first_str = "abcd";
    let second_str = "zn";
    println!("{}", first_str.ends_with(second_str)); // false

    let first_str = "abab";
    let second_str = "bb";
    println!("{}", first_str.contains(second_str)); // false

    let first_str = "abab";
    let second_str = "ab";
    println!("{}", first_str.contains(second_str)); // true

    // find method to locate the location of a match
    let first_str = "abab";
    let second_str = "bb";
    let mut loc: Option<usize> = None;
    for (i, sub_str) in first_str.split(second_str).enumerate() {
        if i > 0 {
            println!("{}", first_str.find(sub_str).unwrap());
            loc = Some(first_str.find(sub_str).unwrap());
        }
    }

    // For multiple occurrences of a string:
    let first_str = "abab";
    let second_str = "ab";
    let mut loc: Option<usize> = None;
    for (i, sub_str) in first_str.split(second_str).enumerate() {
        if i > 0 {
            println!("{}", first_str.find(sub_str).unwrap());
            loc = Some(first_str.find(sub_str).unwrap());
        }
    }
}
