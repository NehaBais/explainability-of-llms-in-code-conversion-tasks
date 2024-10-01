let str = "my String";
const cstr = "Changed ";
const dup = str.split("").reverse().join("");
const newStr = `${cstr}${dup}`;
console.log(newStr);
