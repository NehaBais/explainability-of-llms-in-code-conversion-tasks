const fs = require("fs");

let size1;
try {
  size1 = fs.statSync("input.txt").size; // For a file in the current working directory
} catch (err) {
  console.error(err);
}

let size2;
try {
  size2 = fs.statSync("/input.txt").size; // For a file in the file system root
} catch (err) {
  console.error(err);
}
