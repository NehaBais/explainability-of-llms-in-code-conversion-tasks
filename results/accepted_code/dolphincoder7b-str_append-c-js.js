let str = "Good Morning";
let cstr = " to all";
let cstr2 = " !!!";

if (true) {
  // 1st method
  str += cstr;

  // 2nd method
  let x = str.length;
  str += cstr2;

  console.log(str);
}
