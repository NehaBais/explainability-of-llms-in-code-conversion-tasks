fn main() {
    let mut str1 = String::from("Good Morning"); // Creating a string variable equal to any text value.

    // Appending the string variable with another string literal in the most idiomatic way.
    str1.push_str(" to all");
    str1.push_str(" !!!");

    // Show the contents of the variable after the append operation.
    println!("{}", str1);
}
