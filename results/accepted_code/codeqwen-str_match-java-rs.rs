fn main() {
    let string1 = String::from("abcd");
    let string2 = String::from("ab");
    println!("{}", string1.starts_with(&string2)); // returns true

    let string3 = String::from("zn");
    println!("{}", string1.ends_with(&string3)); // returns false

    let string4 = String::from("abab");
    let sub_string = String::from("bb");
    println!("{}", string4.contains(&sub_string)); // returns false
    println!("{}", string4.contains(&sub_string)); // returns true

    let mut loc = string4.find(&sub_string).unwrap();
    println!("{}", loc); // returns 0

    loc = string4.find(&sub_string).unwrap();
    println!("{}", loc); // returns 2
}
