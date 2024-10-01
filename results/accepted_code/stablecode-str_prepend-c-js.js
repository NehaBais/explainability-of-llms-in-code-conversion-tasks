var str = "my String";
var cstr = "Changed ";
var dup;

// Create a string variable equal to any text value.
// Prepend the string variable with another string literal.
dup = str.slice(); // create a copy of the original string
str = cstr + (dup ? dup : ""); // prepend the string variable with another string literal
console.log(str); // print out the resulting string
