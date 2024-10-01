const fs = require("fs");

const err = "File move error";

fs.rename("input.txt", "output.txt", (err) => {
  if (err) throw err;
});

fs.rename("docs", "mydocs", (err) => {
  if (err) throw err;
});

fs.rename("/input.txt", "/output.txt", (err) => {
  if (err) throw err;
});

fs.rename("/docs", "/mydocs", (err) => {
  if (err) throw err;
});
