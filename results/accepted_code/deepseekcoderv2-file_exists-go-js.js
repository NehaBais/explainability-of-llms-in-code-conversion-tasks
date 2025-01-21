const fs = require("fs");
const path = require("path");

function printStat(p) {
  try {
    const stats = fs.lstatSync(p);
    if (stats.isDirectory()) {
      console.log(`${p} is a directory`);
    } else if (stats.isFile()) {
      console.log(`${p} is a file`);
    } else {
      console.log(`${p} is something else`);
    }
  } catch (err) {
    console.error(err);
  }
}

// Check for the current working directory and filesystem root
printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
