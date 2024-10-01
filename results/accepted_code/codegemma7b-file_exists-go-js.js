const fs = require("fs");

function printStat(p) {
  try {
    const stats = fs.statSync(p);
    if (stats.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (err) {
    console.log(err);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
