The error `format argument must be a string literal` means that the way we are trying to format our string (which is `str` + `txt`) with other arguments in `format!` macro does not match the way it was defined in Golang code.

In Rust, when we want to pass multiple arguments into a string formatting function like `fmt.Sprintf` or `format!`, these arguments must be passed as part of the string itself. That's why there is an additional argument to the `str` and it is being formatted with `txt`.

Rust does not allow you to pass variables directly into a string formatting function because it doesn't support variable substitution in such a way that variables could be inserted into a string literal at runtime. We need to specify all arguments of this format function (string, arguments...) in the string itself before we can proceed with the usage of these arguments.

To resolve this error: 
- You should first insert `str` and then `txt` inside the string into which you are passing other variables; Rust will substitute all these variables within the string literal before it actually uses them at runtime, so it will fix your issue.

Here is how your code would look like in Rust:
```rs
fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = format!(str, str, txt);
    println!("{}", &out);
}
```
