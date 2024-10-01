const fs = require("fs");

let fileA = "file.txt";
fs.stat(fileA, (err, stats) => {
  if (err) throw err;
  console.log(`${stats.size} B`);
});

let fileB = "/file.txt"; // adjust the path to your system's root directory here
fs.stat(fileB, (err, stats) => {
  if (err) throw err;
  console.log(`${stats.size} B`);
});
