let str = "Good Morning"; // String variable equal to any text value
const cstr = " to all"; // Append string literal in the most idiomatic way.
const cstr2 = " !!!"; // Show the contents of the variable after appending a new string

// Check if there is enough space for both strings
if (cstr.length + str.length < 19) {
  str += cstr;
}
console.log(str);
