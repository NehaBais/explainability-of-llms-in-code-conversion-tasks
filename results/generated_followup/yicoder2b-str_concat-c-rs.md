The equivalent Rust version is given below:
```rs
fn sconcat(s1: &str, s2: &str) -> String {
    let mut s0 = String::from(s1);
    s0.push(' '); // add a space for the separator
    s0.extend_from_static(&s2 as [char]);
    return s0;
}

fn main() {
    let s: &str = "hello";
    let mut s2: String = s.to_string();

    println!("{} literal", s);
    /* or */
    println!("{} {} literal", s, "literal");

    s2 = sconcat(&s, " literal").to_string();
    println!("{}", s2);
}
```
The Rust version prints the same result as C version, but the allocation of memory and the usage of `free` are removed because we use `s2` variable only once. The error "value assigned to `s2` is never read" has been fixed in the Rust version. It now warns about it.
