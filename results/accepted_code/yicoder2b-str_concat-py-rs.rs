fn main() {
    let mut s1 = "hello".to_string();
    println!("{}", &s1); // prints: hello

    s1 += " world";
    println!("{}", &s1); // prints: hello world

    let s2 = [s1, "world", "mom"].join(", ");
    println!("{}", &s2); // prints: hello world, mom

    s1 += ", ";
    s1 += &["world", "mom"].join(", ");
    println!("{}", &s1); // prints: hello world, mom, world, mom
}
