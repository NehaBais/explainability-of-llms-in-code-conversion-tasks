let str = "Good Morning";
const cstr = " to all";
const cstr2 = " !!!";
// Failure when space allocated to str is insufficient.
if (str.length + cstr.length + cstr2.length < 24) {
  // 1st method
  str += cstr;

  // 2nd method
  const x = str.length;
  str += cstr2.slice(0, 24 - x);

  console.log(str);
}
