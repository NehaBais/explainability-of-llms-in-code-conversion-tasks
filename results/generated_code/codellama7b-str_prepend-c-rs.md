
Here's the Rust equivalent of the given C code:
```
use std::ffi::CString;

fn main() {
    let str = "my String";
    let cstr = CString::new("Changed ").unwrap();
    let dup = unsafe { str.to_owned() };
    let new_str = format!("{}{}", cstr, dup);
    drop(dup);
    println!("{}", new_str);
}
```
Explanation:

1. The first step is to define the string variable `str` with a value of "my String".
2. Next, we create a CString object for the string literal "Changed ". This is necessary because Rust doesn't have a built-in string type like C does. We use the `CString::new()` method to create a new CString object and then call the `unwrap()` method on it to get the underlying raw pointer.
3. The next step is to allocate memory for a copy of the original string using the `strdup()` function from `<string.h>`. We use the `unsafe` block because this function returns a pointer that needs to be freed later.
4. Next, we concatenate the two strings using the `format!` macro with the format string "{}".
5. Finally, we print the resulting string to the console using the `println!` macro.

Note: In Rust, it is not necessary to free memory explicitly like in C, as the language has a garbage collector that takes care of this automatically.
