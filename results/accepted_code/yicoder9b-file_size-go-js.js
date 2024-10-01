const fs = require("fs");

function printFileSize(f) {
  try {
    let stat = fs.statSync(f);
    console.log(stat.size);
  } catch (err) {
    console.log(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
