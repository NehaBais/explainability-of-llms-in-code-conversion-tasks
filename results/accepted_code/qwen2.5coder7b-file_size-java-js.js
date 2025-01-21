const fs = require("fs");

fs.stat("input.txt", (err, stats) => {
  if (err) throw err;
  console.log(stats.size + " B");
});

fs.stat("/input.txt", (err, stats) => {
  if (err) throw err;
  console.log(stats.size + " B");
});
