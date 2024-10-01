const fs = require("fs");

// Check for files and directories in the current working directory
fs.access("input.txt", fs.constants.F_OK, (err) => {
  console.log(err ? "File does not exist" : "File exists");
});

fs.access("/input.txt", fs.constants.F_OK, (err) => {
  console.log(err ? "File does not exist" : "File exists");
});

fs.access("docs", fs.constants.F_OK | fs.constants.DIR, (err) => {
  console.log(
    err
      ? "Directory does not exist or is not a directory"
      : "Directory exists and is a directory",
  );
});

fs.access("/docs", fs.constants.F_OK | fs.constants.DIR, (err) => {
  console.log(
    err
      ? "Directory does not exist or is not a directory"
      : "Directory exists and is a directory",
  );
});
