const fs = require("fs");
console.log(fs.existsSync("./input.txt")); // true
console.log(fs.existsSync("/input.txt")); // false (file doesn't exist in root)
console.log(
  fs.statSync("./docs", (err, stats) => {
    if (err) throw err;
    console.log(stats.isDirectory()); // true
  }),
);
console.log(
  fs.statSync("/docs", (err, stats) => {
    if (err) throw err;
    console.log(stats.isDirectory()); // false (directory doesn't exist in root)
  }),
);
