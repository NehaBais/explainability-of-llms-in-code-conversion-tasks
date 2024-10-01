const fs = require("fs");

// rename in current directory
try {
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
} catch (err) {
  console.error(err);
}

// rename in root directory
try {
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
} catch (err) {
  console.error(err);
}
