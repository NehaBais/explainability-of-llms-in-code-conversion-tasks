fn main() {
    let str1 = "abcd";

    println!("{}", str1.starts_with("ab"))); //prints "true"
    println!("{}", str1.ends_with("zn")))); //prints "false"
    println!("{}", str1.contains("bb") )); //prints "false"
    println!("{}", str1.contains("ab")) )); //prints "true"
    let loc = str1.find("bb").unwrap(); // prints "-1" (if no match is found) or an actual location number if a match occurs
    let loc = str1.find("ab"); 
    println!("{}",loc));//prints either "0" for the first occurrence, or "-1" if the string doesn't contain the substring at all
}