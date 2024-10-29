fn main() {
    let mut s = String::from("world!");
    s.prepend_owned(String::from("Hello, ")); // Appends the content of `"Hello, "` to `s`
}
