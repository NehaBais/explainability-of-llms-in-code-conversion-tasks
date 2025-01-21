fn main() {
    let str1 = "abcd";
    let str2 = "ab";

    println!("{}", starts_with(str1, str2)); // true
    println!("{}", ends_with(str1, str2)); // false
    println!("{}", contains(str1, str2)); // true
}
