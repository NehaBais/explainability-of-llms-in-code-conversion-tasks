const fs = require("fs");
const path = require("path");

function printStat(p) {
  fs.stat(p, (err, stats) => {
    if (err) {
      console.error(err);
      return;
    }
    if (stats.isDirectory()) {
      console.log(`${p} is a directory`);
    } else if (stats.isFile()) {
      console.log(`${p} is a file`);
    } else {
      console.log(`${p} is neither a file nor a directory.`);
    }
  });
}

printStat(path.join(process.cwd(), "input.txt"));
printStat(path.join("/", "input.txt"));
printStat(path.join(process.cwd(), "docs"));
printStat(path.join("/", "docs"));
