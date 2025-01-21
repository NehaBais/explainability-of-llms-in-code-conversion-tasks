The error is caused by an unclosed delimiter at line 4, where the `println!` macro is used to print the boolean expressions evaluated to a boolean value.

To fix this error, we need to ensure that all delimiters are properly closed in our code.

Here's the corrected code:

```rs
fn print_logic(a: bool, b: bool) 
{
    println!("{}", (a && b)) ;
    println!("{}", (a || b))) ;
    println!("{}", !a));
}
```

In the corrected code above:
- The function `print_logic` takes in two boolean values, `a` and `b`.
- It prints out the result of "and" and "or" on both arguments as well as "not" on the first argument.

This corrected code should compile without any errors.
