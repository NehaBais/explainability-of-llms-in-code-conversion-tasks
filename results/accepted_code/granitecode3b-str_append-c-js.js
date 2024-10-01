let str = "Good Morning";
let cstr = " to all";
let cstr2 = " !!!";
if (str.length + cstr.length + cstr2.length > str.length) {
  str += cstr2;
} else {
  let x = str.length;
  str = str.slice(0, x) + cstr2 + str.slice(x);
}
console.log(str); // Output: Good Morning to all !!!
