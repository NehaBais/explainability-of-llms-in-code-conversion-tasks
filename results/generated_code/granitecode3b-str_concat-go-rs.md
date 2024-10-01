Sure! Here's the equivalent Rust code for the given Golang code:
```
fn main() {
    // text assigned to a string variable
    let mut s = String::from("hello");

    // output string variable
    println!("{}", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", s);

    // output second string variable
    println!("{}", s2);
}
```
In Rust, we use the `String::from()` function to create a new string from an existing value. We then use the `println!` macro to print the contents of the string variable `s`. To concatenate a string literal with a variable, we use the `format!` macro and pass in the variable as an argument. The resulting string is assigned to the new string variable `s2`. Finally, we use another `println!` macro to print the contents of the new string variable `s2`.

