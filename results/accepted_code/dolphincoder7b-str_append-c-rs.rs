fn main() {
    let str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    if str.capacity() > str.len() + cstr.len() + cstr2.len() {
        // 1st method
        let new_str: String = format!("{}{}", str, cstr);

        println!("{}", new_str);

        // 2nd method
        let mut str: Vec<u8> = str.into_bytes();
        str.extend(cstr2.as_bytes());
        str.extend(" ".as_bytes()); // Assuming spaces were meant between the original string and "to all"

        println!("{}", String::from_utf8(str).unwrap());
    }
}
