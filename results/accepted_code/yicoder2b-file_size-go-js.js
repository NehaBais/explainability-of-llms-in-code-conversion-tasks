const fs = require("fs");

function printFileSize(fileName) {
  fs.stat(fileName, (err, stats) => {
    if (err) {
      console.error(`Couldn't stat '${fileName}'`);
    } else {
      console.log(stats.size);
    }
  });
}

printFileSize("input.txt");
printFileSize("/input.txt");
