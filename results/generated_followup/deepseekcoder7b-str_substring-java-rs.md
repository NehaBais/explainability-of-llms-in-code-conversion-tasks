The error message indicates that the lifetime of the function parameters 's' or 'sub' is not specified, while they are borrowed inside the body of the function, which Rust requires for all references. 

The fix to this would be to add a named lifetime parameter in every definition like so: 
```rs
fn substring<'a>(s: &'a str, n: usize, m: usize) -> &'a str {
    &s[n..n + m]
}

fn substring_from_n<'a>(s: &'a str, n: usize) -> &'a str {
    &s[n..]
}

fn substring_except_last<'a>(s: &'a str) -> &'a str {
    let last = s.len() - 1;
    &s[..last]
}

fn substring_from_char<'a>(s: &'a str, c: char, m: usize) -> &'a str {
    let start = s.find(c).unwrap();
    &s[start..start + m + 1]
}

fn substring_from_substring<'a>(s: &'a str, sub: &'a str, m: usize) -> &'a str {
    let start = s.find(sub).unwrap();
    &s[start..start + m + 1]
}
``` 

The updated code now correctly specifies that it will return a reference to some part of the input string 's', which is borrowed from 's'. The error about not having a main function in the crate also seems unrelated to this conversion. So, no change for that.

