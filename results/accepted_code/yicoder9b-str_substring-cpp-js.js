let s = "0123456789";

const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substring(n, n + m) + "\n");
console.log(s.substring(n) + "\n");
console.log(s.slice(0, -1) + "\n");
let index = s.indexOf(c);
if (index > -1) {
  console.log(s.substring(index, index + m) + "\n");
} else {
  console.log("No character found" + "\n");
}
index = s.indexOf(sub);
if (index > -1) {
  console.log(s.substring(index, index + m) + "\n");
} else {
  console.log("Substring not found" + "\n");
}
