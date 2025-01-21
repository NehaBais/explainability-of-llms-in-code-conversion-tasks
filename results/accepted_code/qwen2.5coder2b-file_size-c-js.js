const fs = require("fs");

let inputFilePath = "input.txt";

fs.stat(inputFilePath, (err, stats) => {
  if (err) throw err;

  console.log(stats.size);
});

fs.stat("/input.txt", (err, stats) => {
  if (err) throw err;

  console.log(stats.size);
});
