const fs = require("fs");

// Get size of input.txt in the current working directory
fs.stat("input.txt", (err, stats) => {
  if (err) {
    return console.error(err);
  }
  console.log(`Size of 'input.txt' in CWD: ${stats.size} bytes`);
});

// Get size of /input.txt
fs.stat("/input.txt", (err, stats) => {
  if (err) {
    return console.error(err);
  }
  console.log(`Size of '/input.txt': ${stats.size} bytes`);
});
