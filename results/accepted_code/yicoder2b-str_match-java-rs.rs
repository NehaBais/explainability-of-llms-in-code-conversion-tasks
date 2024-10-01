fn main() {
    let s1: &str = "abcd";
    let s2: &str = "ab";
    let s3: &str = "zbn";
    let s4: &str = "abab";
    let s5: &str = "bb";
    let s6: &str = "ab";
    let s7: &str = "abab";

    println!("{}", s1.starts_with(s2)); // true
    println!("{}", s3.ends_with(s2)); // false
    println!("{}", s4.contains(s5)); // false
    println!("{}", s6.contains(s7)); // true
    let loc: i32 = "abab".find(s7).unwrap_or(-1); // 2
    let loc = "abab".find(s6).unwrap() + 1; // 0
}
