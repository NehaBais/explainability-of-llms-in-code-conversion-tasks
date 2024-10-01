fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    if str.capacity() > str.len() + cstr.len() + cstr2.len() {
        str.push_str(cstr);
        str.push_str(cstr2);

        println!("{}", str);
    }
}
