The error message indicates that it is not possible to build a String value from an iterator over elements of type &&str, which is a double reference to a string slice. In Rust, references are covariant, so &T is covariant in T, and thus can't be used where we need a &'a str or a &String.

The fix for this issue involves explicitly converting the individual strings into String objects before collecting them together as a new String object. Here's how you can do it:

```rs
fn main() {
    // Create a string variable equal to any text value.
    let mut s1 = String::from("hello");
    println!("{} world", s1);

    // Create another string variable whose value is the original variable concatenated with
    //another string literal.
    let mut s2: String = format!("{} world", s1);
    println!("{}", s2);

    s1 = String::from("hello");
    let s: Vec<String> = [&s1, "world", "mom"].iter().map(|x| x.to_string()).collect();
    println!("{}", s.join(", "));

    let mut s2: String = [&s1, "world", "mom"].iter().map(|x| x.to_string()).collect::<Vec<String>>().join(", ");
    println!("{}", s2);
}
```
In the corrected code, `x.to_string()` is used to explicitly convert each string slice into a String object before being collected together as a Vec of String objects, which are then joined with a comma and space separator. The join method is used to concatenate all elements in the vector into one single string separated by commas and spaces. This provides a similar output to the Python version of your original script.
