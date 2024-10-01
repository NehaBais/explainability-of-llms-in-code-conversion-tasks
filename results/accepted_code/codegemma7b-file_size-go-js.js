const fs = require("fs");

function printFileSize(f) {
  try {
    const stats = fs.statSync(f);
    console.log(stats.size);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
