const fs = require("fs");

try {
  // Checking the size of 'input.txt' in current working directory
  let stats = fs.statSync("input.txt");
  console.log(stats.size);

  // Checking the size of '/input.txt' in file system root
  stats = fs.statSync("/input.txt");
  console.log(stats.size);
} catch (err) {
  console.error(`Error: ${err}`);
}
