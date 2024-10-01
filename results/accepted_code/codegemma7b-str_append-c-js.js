let str = "Good Morning";
let cstr = " to all";
let cstr2 = " !!!";

if (str.length + cstr.length + cstr2.length < 24) {
  str += cstr; // 1st method: string concatenation

  // 2nd method: string concatenation with template literals
  str += `${cstr2}`;

  console.log(str);
}
