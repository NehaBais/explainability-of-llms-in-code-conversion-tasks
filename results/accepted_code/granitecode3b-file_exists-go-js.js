const fs = require("fs");
function printStat(p) {
  switch (true) {
    case fs.existsSync(p):
      const stats = fs.statSync(p);
      if (stats.isDirectory()) {
        console.log(`${p} is a directory`);
      } else {
        console.log(`${p} is a file`);
      }
      break;
    default:
      console.error(`Error: ${p} does not exist.`);
  }
}
printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
