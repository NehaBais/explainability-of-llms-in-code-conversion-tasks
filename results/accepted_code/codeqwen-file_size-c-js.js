const fs = require("fs");

// for the file in the current working directory
fs.stat("input.txt", (err, stats) => {
  if (err) throw err;
  console.log(`Size of ${stats.size} bytes`);
});

// For the file in the root directory
fs.stat("/input.txt", (err, stats) => {
  if (err) throw err;
  console.log(`Size of ${stats.size} bytes`);
});
