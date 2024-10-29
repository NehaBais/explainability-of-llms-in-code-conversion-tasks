let str = "Good Morning";
const cstr1 = " to all";
const cstr2 = " !!!";

// Check if there's enough space for concatenation. Since in JS strings are dynamic, we don't need to worry about insufficient space.
if (true) {
  // Method 1: Use JavaScript's built-in concat method.
  str = str.concat(cstr1);

  // Method 2: We can use the plus operator (+).
  str = str + cstr2;

  console.log(str);
}
