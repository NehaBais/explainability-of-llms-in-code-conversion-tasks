Here's the Rust code that achieves the same functionality as the JavaScript code you provided:
```
fn main() {
 let original = String::from("Mary had a X lamb");
 let little = "little";
 let replaced = original.replace("X", &little); //changes the original string
 println!("{}", replaced);
}
```
In this Rust code, we first define two variables: `original` and `little`. The `original` variable is initialized with a string value of "Mary had a X lamb". The `little` variable is initialized with a string value of "little".
Next, we use the `replace()` method on the `original` variable to replace all occurrences of "X" with the value of the `little` variable. The `replace()` method returns a new string that contains the original string with the replacements made. We store this result in the `replaced` variable.
Finally, we print out the contents of the `replaced` variable using the `println!()` macro. When you run this code, it will output "Mary had a little lamb", which is the result of interpolating the values into the original string.

