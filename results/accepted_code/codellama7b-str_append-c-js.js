const str = "Good Morning";
const cstr = " to all";
const cstr2 = " !!!";
let x = 0;

if (str.length > str.length + cstr.length + cstr2.length) {
  // 1st method
  str += cstr;

  // 2nd method
  x = str.length;
  str = `${str.substring(0, x)}${cstr2}`;

  console.log(str);
}
