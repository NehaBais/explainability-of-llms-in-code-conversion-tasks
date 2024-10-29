var fs = require("fs");

// Rename from current working directory
fs.rename("input.txt", "output.txt", function (err) {
  if (err) throw err;
  console.log("File renamed to output.txt in the current working directory!");
});

fs.rename("docs", "mydocs", function (err) {
  if (err) throw err;
  console.log(
    "Directory docs renamed as mydocs in the current working directory!",
  );
});

// Rename from filesystem root, you will need admin/root access to do this:
try {
  fs.rename("/input.txt", "/output.txt", function (err) {
    if (err) throw err;
    console.log("File renamed to /output.txt in the filesystem root!");
  });

  fs.rename("/docs", "/mydocs", function (err) {
    if (err) throw err;
    console.log("Directory docs renamed as /mydocs in the filesystem root!");
  });
} catch (e) {
  //Handle errors here:
  console.error(e);
}
