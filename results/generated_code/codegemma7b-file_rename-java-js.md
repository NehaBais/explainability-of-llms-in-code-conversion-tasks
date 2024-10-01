```javascript
function renameFile(oldname, newname) {
  const file = new File(oldname);
  const file2 = new File(newname);
  return file.renameTo(file2);
}

function test(type, oldname, newname) {
  console.log(`The following ${type} called ${oldname}${renameFile(oldname, newname) ? ' was renamed as ' : ' could not be renamed into '}${newname}.`);
}

test('file', 'input.txt', 'output.txt');
test('file', `${File.separator}input.txt`, `${File.separator}output.txt`);
test('directory', 'docs', 'mydocs');
test('directory', `${File.separator}docs${File.separator}`, `${File.separator}mydocs${File.separator}`);
```
