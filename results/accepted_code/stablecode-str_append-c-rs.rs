fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!";

    // Appending strings using format! macro
    str = format!("{}{}{}", str, cstr, cstr2);

    println!("{}", str);
}
