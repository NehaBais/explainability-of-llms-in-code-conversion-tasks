const fs = require("fs");
// Create an empty file called "output.txt" in the current working directory and in the filesystem root
fs.open("output.txt", "w", 0o640, (err, fd) => {
  if (err) throw err;
  fs.close(fd, (err) => {
    if (err) throw err;
  });
});
fs.mkdir("docs", { mode: 0o750 }, (err) => {
  if (err) throw err;
});
