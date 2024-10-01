Here is the Rust code equivalent to your Java code:

```rust
fn main() {
    let string1 = String::from("abcd");
    let string2 = String::from("ab");
    println!("{}", string1.starts_with(&string2)); // returns true

    let string3 = String::from("zn");
    println!("{}", string1.ends_with(&string3)); // returns false

    let string4 = String::from("abab");
    let sub_string = String::from("bb");
    println!("{}", string4.contains(&sub_string)); // returns false
    println!("{}", string4.contains(&sub_string)); // returns true

    let mut loc = string4.find(&sub_string).unwrap();
    println!("{}", loc); // returns 0

    loc = string4.find(&sub_string).unwrap();
    println!("{}", loc); // returns 2
}
```

This code converts the given Java code into Rust by using functions provided by the Rust standard library for strings: `starts_with`, `ends_with`, `contains`, and `find`. The `unwrap()` function is used to unwrap an `Option<T>` value, which can be either Some(t) or None. If None, it will panic with a message "called `Option::unwrap()` on a `None` value".
