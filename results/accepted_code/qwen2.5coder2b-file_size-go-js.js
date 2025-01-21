const fs = require("fs");

function printFileSize(filePath) {
  fs.stat(filePath, (err, stats) => {
    if (err) {
      console.error(err);
    } else {
      console.log(stats.size);
    }
  });
}

printFileSize("input.txt");
printFileSize("/input.txt");
