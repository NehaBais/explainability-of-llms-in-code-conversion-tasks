const fs = require("fs");

function printStat(p) {
  try {
    const stat = fs.statSync(p);
    if (stat.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (err) {
    console.error(err);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
