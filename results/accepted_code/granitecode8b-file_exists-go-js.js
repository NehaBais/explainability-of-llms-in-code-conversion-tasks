const fs = require("fs");

function printStat(path) {
  try {
    const stats = fs.statSync(path);
    if (stats.isDirectory()) {
      console.log(`${path} is a directory`);
    } else {
      console.log(`${path} is a file`);
    }
  } catch (err) {
    console.log(err);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
