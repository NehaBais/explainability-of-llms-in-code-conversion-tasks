The code is in Rust, and it can be converted into Java using the following steps:

1. Replace `println!` with `System.out.println`.
2. Replace `""` with `String.format`.
3. Replace `%` with `{0}`, which represents the first parameter.
4. Replace `{}` with `{name}`, which represents the second parameter.
5. Replace `{}` with `{adj}`, which represents the third parameter.
6. Add a semicolon at the end of each line.

Here is the converted code in Java:
```
public static void main(String[] args) {
    System.out.println("Mary had a " + String.format("%s lamb", "little"));
    // You can specify order
    System.out.println(String.format("%s had a %s lamb", "Mary", "little"));
    // Or named arguments if you prefer
    System.out.println(String.format("{name} had a {adj} lamb", "Mary", "little"));
}
```
Note that the syntax for string interpolation in Java is different from Rust, so some adjustments may be necessary to ensure that the code runs correctly.
