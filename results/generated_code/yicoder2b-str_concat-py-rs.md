Sure, here is the equivalent Rust code for your Python code - 

```rust
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
``` 
This program first declares a mutable string `s1` and initializes its content to the string literal "hello". It then concatenates the string " world" to this value of `s1` using the `+=` operator (which is the same as `s1 = s1 + &<+>`) and prints the new value of `s1`.

Next, it declares a vector of strings `[s1, "world", "mom"]` and uses the `join()` method to concatenate all elements of the vector with the string literal ", " as separator between each pair of adjacent elements. It then assigns this new value to `s2` and prints it.

Finally, it modifies the content of `s1` by adding ", " at the end of its initial value (`"hello"`) and appending another vector of strings `["world", "mom"]` where each string is concatenated with ", " as separator between each pair of adjacent elements. This new value of `s1` is then printed again.
