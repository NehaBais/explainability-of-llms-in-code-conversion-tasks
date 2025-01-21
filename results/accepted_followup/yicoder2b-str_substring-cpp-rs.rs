let s = "Hello, world";
match s {
    &mut str s if s.is_empty() => println!("String is empty.")
}