var fs = require("fs");

// rename current directory files and directories
fs.rename("input.txt", "output.txt", function (err) {
  if (err) throw err;
  console.log("input.txt has been renamed to output.txt");
});

fs.rename("docs", "mydocs", function (err) {
  if (err) throw err;
  console.log("docs has been renamed to mydocs");
});

// rename root directory files and directories, you'll need to run the script in an appropriate location like '/'  or 'C:\' .
fs.rename("/input.txt", "/output.txt", function (err) {
  if (err) throw err;
  console.log("/input.txt has been renamed to /output.txt");
});

fs.rename("/docs", "/mydocs", function (err) {
  if (err) throw err;
  console.log("/docs has been renamed to /mydocs");
});
