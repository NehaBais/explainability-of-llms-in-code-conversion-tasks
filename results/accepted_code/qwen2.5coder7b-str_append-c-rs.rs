fn main() {
    let mut str = String::from("Good Morning");
    let cstr1 = " to all";
    let cstr2 = " !!!";

    // Append the strings using the `push_str` method
    str.push_str(cstr1);
    str.push_str(cstr2);

    println!("{}", str);  // Show the contents of the variable after the append operation
}