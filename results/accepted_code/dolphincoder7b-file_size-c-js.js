const fs = require("fs");

function main() {
  let stats = fs.statSync("./input.txt");
  console.log(stats.size);
  stats = fs.statSync("/input.txt");
  console.log(stats.size);
}

main();
