In JavaScript there is no direct equivalent to Rust's AsciiExt trait, but you can still achieve case-insensitive comparisons using the localeCompare method of String objects and by checking the return value. 

Here is a JavaScript version for your code:

```javascript
let a = "abc";
let b = "Bac";
// exact equality comparison
if (a === b) { console.log("The strings are equal") }
if (a !== b) { console.log("The strings are not equal") }

// lexical order comparisons
if (a > b) { console.log("The first string is lexically after the second") }
if (a < b) { console.log("The first string is lexically before the second") }

// case-insensitive comparison
if (a.localeCompare(b, undefined, {sensitivity: 'base'}) === 0) 
{ 
    console.log("Both strings are equal when ignoring case");
}

let c = "123";
let d = "456";
if (c > d) { console.log("The first string is lexically after the second") } // This will not be printed as in numeric comparison, '123' comes before '456'

if(a.charCodeAt(0) > b.charCodeAt(0)) { console.log("The first character of the string is lexically after the second") } 
// This will print "The first character of the string is lexically after the second" if a's first character has a larger ASCII value than b's first character.
```
The `localeCompare()` function returns a number indicating whether a reference string comes before, after or is the same as the given string in sort order. It also accepts optional locales and options parameters which can be used for locale-specific comparisons and customization of comparison behavior like case sensitivity. 

For lexically comparing numeric strings JavaScript will convert these to numbers if possible and then compare them numerically, it's not the same as in Rust where you would need a different function or method/operator for that purpose. 

This JavaScript code covers most aspects you requested including comparison operators, case-insensitive comparisons and simple numeric string lexical comparison as well. Note that there isn’t an exact equivalent to Rust's AsciiExt trait for case-sensitive and case-insensitive comparison in Javascript.

