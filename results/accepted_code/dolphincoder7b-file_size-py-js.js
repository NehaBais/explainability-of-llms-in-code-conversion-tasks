const fs = require("fs");

let size;

try {
  const stat = fs.statSync("./input.txt");
  size = stat.size;
} catch (err) {}

try {
  const stat = fs.statSync("/input.txt");
  if (!!stat && !stat.isDirectory()) {
    size += stat.size;
  }
} catch (err) {}
