fn main() {
    let mut str = String::from("Good Morning");
    let cstr = " to all";
    let cstr2 = " !!!";

    // Append strings in the most idiomatic way
    str.push_str(cstr);
    str.push_str(cstr2);

    // Print contents of variable after append operation
    println!("{}", str);
}
