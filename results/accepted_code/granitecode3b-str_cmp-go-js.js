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