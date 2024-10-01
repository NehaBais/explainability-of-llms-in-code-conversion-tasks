let str = "my String";
const cstr = "Changed ";
let dup = null;

str = cstr + str;
dup = str.slice();
console.log(str);
