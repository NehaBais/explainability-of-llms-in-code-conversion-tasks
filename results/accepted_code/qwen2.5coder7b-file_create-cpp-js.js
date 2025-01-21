const fs = require("fs");
const path = require("path");

// Create output.txt in the current working directory
fs.open(path.join(__dirname, "output.txt"), "w", (err, fd) => {
  if (err) throw err;
  fs.close(fd, () => {});
});

// Create output.txt at the filesystem root
fs.open("/output.txt", "w", (err, fd) => {
  if (err) throw err;
  fs.close(fd, () => {});
});

// Create docs in the current working directory
fs.mkdir(path.join(__dirname, "docs"), { recursive: true }, (err) => {
  if (err) throw err;
});

// Create docs at the filesystem root
fs.mkdir("/docs", { recursive: true }, (err) => {
  if (err) throw err;
});
