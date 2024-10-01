Sure! Here's the JavaScript code that converts the Golang code to JavaScript:
```javascript
package main;
function main() {
 const c = 'cat';
 const d = 'dog';
 if (c === d) {
 console.log(c + " is bytewise identical to " + d);
 }
 if (c !== d) {
 console.log(c + " is bytewise different from " + d);
 }
 if (c > d) {
 console.log(c + " is lexically bytewise greater than " + d);
 }
 if (c < d) {
 console.log(c + " is lexically bytewise less than " + d);
 }
 if (c >= d) {
 console.log(c + " is lexically bytewise greater than or equal to " + d);
 }
 if (c <= d) {
 console.log(c + " is lexically bytewise less than or equal to " + d);
 }

 const eqf = `when interpreted as UTF-8 and compared under Unicode
 simple case folding rules.`;
 if (c.toLowerCase() === d.toLowerCase()) {
 console.log(c + " equal to " + d + ", " + eqf);
 } else {
 console.log(c + " not equal to " + d + ", " + eqf);
 }

 // Seeing that the built in operators work bytewise and the library
 // case folding functions interpret UTF-8, you might then ask about
 // other equality and inequality tests that interpret UTF-8.
 // Functions for this are not in the Go standard library but are in
 // the Go "sub repository" at golang.org/x/text.  There is support
 // for Unicode normalization, collation tables, and locale sensitive
 // comparisons.
}
```
In JavaScript, strings can be compared using the `===` operator to check for exact equality and the `!==` operator to check for inequality. The `>` and `<` operators can be used to compare strings lexically.
To perform a case-insensitive comparison, we can use the `toLowerCase()` method to convert both strings to lowercase before comparing them.
The Golang code also demonstrates other kinds of string comparisons that the language provides, such as comparison of numeric strings under Unicode and support for Unicode normalization, collation tables, and locale sensitive comparisons in the Go "sub repository" at golang.org/x/text.

