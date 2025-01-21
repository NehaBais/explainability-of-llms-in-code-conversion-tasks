In JavaScript, the string comparison is performed using the `==`, `!=`, `<`, `>`, `<=`, and `>=` operators. There are no strict equality or inequality operators in JavaScript as such, but you can use the triple equals (===) and the not-equals (!==) operators for checking strict equality and inequality respectively.

For case insensitive comparison, you can use the toUpperCase() method which returns a new string with all uppercase letters and then compare it with another string. Note that JavaScript's `==` operator uses type coercion in its comparisons, so you might encounter unexpected results when comparing strings containing numbers or other types of data.

Here is how you could convert your Rust code to JavaScript:

```javascript
function main() {
    // only same types can be compared
    var a = "abc";
    var b = new String("Bac");

    if (a === b) { console.log("The strings are equal"); }
    if (a !== b) { console.log("The strings are not equal"); }
    if (a > b) { console.log("The first string is lexically after the second"); }
    if (a < b) { console.log("The first string is lexically before the second"); }
    if (a >= b) { console.log("The first string is not lexically before the second"); }
    if (a <= b) { console.log("The first string is not lexically after the second"); }

    // case-insensitives:

    // equality
    var a2 = a.toUpperCase();
    var b2 = b.toUpperCase();

    // repeat checks
}
```
In this JavaScript version, `==` operator will perform type coercion and hence you may need to check the data types of your variables to ensure that they are compatible for comparison. For example, if `a` is a number but `b` is a string, JavaScript will convert `a` to a string before performing the comparison.

Please note that while this code converts your Rust code into JavaScript, it does not demonstrate all aspects and scenarios of comparing strings in different ways such as exact equality, inequality, lexical order, case insensitive comparison, and handling numeric strings.
