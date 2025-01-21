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

    match "abab".find("bb") {
        Ok(loc) => println!("{}", loc),
        Err(_) => println!("Not found"),
    }
    match "abab".find("ab") {
        Ok(loc) => println!("{}", loc),
        Err(_) => println!("Not found"),
    }
}