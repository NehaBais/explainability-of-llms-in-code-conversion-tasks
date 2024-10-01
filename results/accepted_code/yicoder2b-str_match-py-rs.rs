fn main() {
    let str1: String = String::from("abcd");
    let str2: String = String::from("ab");
    let str3: String = String::from("bb");
    let str4: String = String::from("abab");
    let str5: String = String::from("zzz");

    let start_str1_with_str2: bool = str1.starts_with(&str2); // returns true
    println!("{}", start_str1_with_str2);

    let contains_str3_in_str4: bool = str4.contains(&str3); // returns false
    println!("{}", contains_str3_in_str4);

    let ends_str1_with_str5: bool = str1.ends_with(&str5); // returns true
    println!("{}", ends_str1_with_str5);

    let loc1: i32 = "abab".find("bb").unwrap(); // returns -1
    println!("{}", loc1);

    let loc2: i32 = "abab".find("ab").unwrap(); // returns 0
    println!("{}", loc2);

    let loc3: i32 = "abab".find("ab", loc2 + 1).unwrap(); // returns 2
    println!("{}", loc3);
}
