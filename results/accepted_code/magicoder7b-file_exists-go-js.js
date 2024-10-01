const fs = require("fs");

function printStat(p) {
  fs.stat(p, (err, stats) => {
    if (err) {
      console.log(err);
    } else if (stats.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  });
}

printStat("./input.txt");
printStat("/input.txt");
printStat("./docs");
printStat("/docs");
