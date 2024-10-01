const fs = require("fs");

let stats1;
try {
  stats1 = fs.statSync("input.txt");
} catch (err) {
  console.error(err);
}

if (stats1) {
  console.log(`Size of input.txt: ${stats1.size}}`);
}

let stats2;
try {
  stats2 = fs.statSync("/input.txt");
} catch (err) {
  console.error(err);
}

if (stats2) {
  console.log(`Size of /input.txt: ${stats2.size}}`);
}
