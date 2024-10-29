let str = "my String";
const cstr = "Changed ";
const dup = str; // we use 'dup' to store the original string, just in case if needed later.
str = cstr + dup;
console.log(str);
