try {
  fs.renameSync(
    path.resolve("/input.txt")),
    path.resolve("/output.txt")));
} catch (err) {
  console.error(`${errMsg} - ${err.message}}`));
}