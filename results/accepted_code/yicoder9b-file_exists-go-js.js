const fs = require("fs").promises;

async function printStat(p) {
  try {
    const stats = await fs.stat(p);
    if (stats.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (error) {
    console.log(error);
  }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
