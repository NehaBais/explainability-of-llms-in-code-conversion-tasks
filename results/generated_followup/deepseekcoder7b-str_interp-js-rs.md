The error occurred because Rust does not have an operator or keyword `replace!`. The correct method to perform string replacement is `replacen!`. 

Here's the corrected version of the Rust code:
```rs
fn main() {
    let mut original = String::from("Mary had a X lamb");
    let little = String::from("little");
    
    // Replace "X" with "little", and store result in `original`.
    original.replacen!(original.as_str(), "X", &little, std::usize::MAX); 

    println!("{}", original);
}
```
The method `replace!` has been replaced by `replacen!` and the last argument is set to `std::usize::MAX` which means replacing all occurances. This was missing in your original JavaScript code too, therefore the fix was also adding that part. 
As a result of this change, now it should compile successfully without any syntax errors or runtime issues.

