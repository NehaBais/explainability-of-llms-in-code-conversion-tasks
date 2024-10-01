fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    // Failure when space allocated to str is insufficient.
    if str.len() + cstr.len() + cstr2.len() < 24 {
        str.push_str(cstr);
        str.push_str(cstr2);

        println!("{}", str);
    }
}
