Rust provides a variety of string comparison operators that can be used to compare strings in different ways. Here are the equivalent Rust code examples for the JavaScript code you provided:

1. Comparing two strings for exact equality:
```rust
let str1 = "abcd";
let str2 = "abcd";

if str1 == str2 {
    println!("Strings are equal");
} else {
    println!("Strings are not equal");
}
```
2. Comparing two strings for inequality:
```rust
let str1 = "abcd";
let str2 = "dcba";

if str1 != str2 {
    println!("Strings are not equal");
} else {
    println!("Strings are equal");
}
```
3. Comparing two strings to see if one is lexically ordered before the other:
```rust
let str1 = "abcd";
let str2 = "dcba";

if str1 < str2 {
    println!("String 1 is lexically ordered before string 2");
} else {
    println!("String 2 is lexically ordered before or equal to string 1");
}
```
4. Comparing two strings to see if one is lexically ordered after the other:
```rust
let str1 = "dcba";
let str2 = "abcd";

if str1 > str2 {
    println!("String 1 is lexically ordered after string 2");
} else {
    println!("String 2 is lexically ordered after or equal to string 1");
}
```
5. Comparing two strings with case sensitivity:
```rust
let str1 = "abcd";
let str2 = "ABCD";

if str1 == str2 {
    println!("Strings are equal (case sensitive)");
} else {
    println!("Strings are not equal (case sensitive)");
}
```
6. Comparing two strings with case insensitivity:
```rust
let str1 = "abcd";
let str2 = "ABCD";

if str1.to_lowercase() == str2.to_lowercase() {
    println!("Strings are equal (case insensitive)");
} else {
    println!("Strings are not equal (case insensitive)");
}
```
7. Comparing two numeric strings:
```rust
let num1 = "123";
let num2 = "456";

if num1 < num2 {
    println!("Number 1 is lexically ordered before number 2");
} else {
    println!("Number 2 is lexically ordered before or equal to number 1");
}
```
Note that in Rust, the `==` operator checks for both equality and type equivalence. To check for equality only, you can use the `=` operator instead. Similarly, to check for inequality only, you can use the `!=` operator.
