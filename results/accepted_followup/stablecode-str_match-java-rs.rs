fn main() {
    let str1 = "abcd";

    println!("{} starts with \"ab\": {}", str1, str1.starts_with("ab")));

    println!("{} ends with \"zn\": {}", str1, str1.ends_with("zn")));

    println!("{} contains \"bb\": {}", str1, str1.contains("bb")));
}