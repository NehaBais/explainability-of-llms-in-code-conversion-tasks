fn starts_with(s1: &str, s2: &str) -> bool {
    s1.starts_with(s2)
}

fn contains(s1: &str, s2: &str) -> bool {
    s1.contains(s2)
}

fn ends_with(s1: &str, s2: &str) -> bool {
    s1.ends_with(s2)
}

fn main() {
    let str1 = "abcd";
    let str2 = "ab";

    println!("{}", starts_with(str1, str2)); // prints true
    println!("{}", ends_with(str1, "zn")); // prints false
    println!("{}", contains(str1, str2)); // prints false

    let mut loc: usize = 0;
    while loc < str1.len() {
        if contains(str1, &str2[loc..]) {
            println!("Match found at index {}", loc);
            loc += str2.len();
        } else {
            loc += 1;
        }
    }
}
