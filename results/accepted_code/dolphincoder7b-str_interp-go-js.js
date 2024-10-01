const { sprintf } = require("sprintf-js");

const str = "Mary had a %s lamb";
const txt = "little";
let out = sprintf(str, txt);
console.log(out);
