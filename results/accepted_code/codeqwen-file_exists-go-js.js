const fs = require("fs");
const path = require("path");

function printStat(p) {
  try {
    let stat = fs.statSync(p);
    if (stat.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} Is a file`);
    }
  } catch (err) {
    console.error(err);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
