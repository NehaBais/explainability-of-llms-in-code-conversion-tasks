const fs = require("fs");

fs.stat("input.txt", (err, stats) => {
  if (err) throw err;
  console.log(`Size of input.txt: ${stats.size}`);
});

// In the following line, make sure that you have permissions to read files from root directory in your system.
fs.stat("/input.txt", (err, stats) => {
  if (err) throw err;
  console.log(`Size of /input.txt: ${stats.size}`);
});
