function replaceStringWithStringInterpolation(str, value) {
  return str.replace("%s", value);
}

let str = "Mary had a %s lamb";
let txt = "little";
let out = replaceStringWithStringInterpolation(str, txt);
console.log(out);
