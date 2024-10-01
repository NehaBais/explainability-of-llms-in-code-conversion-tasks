fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";
    let x = str.len();
    // Failure when space allocated to str is insufficient.

    if x < (str.len() + cstr.len() + cstr2.len()) {
        // 1st method
        str += cstr;

        // 2nd method
        let y = str.len();
        str.push_str(cstr2);
    }
    println!("{}", str);
}
