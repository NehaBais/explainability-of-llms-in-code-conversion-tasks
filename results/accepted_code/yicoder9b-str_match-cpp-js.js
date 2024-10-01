let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

//Beginning
console.log(s1.startsWith(s3));

//End
console.log(s1.endsWith(s3));

//Anywhere (handle multiple occurrences)
function findAllOccurrences(mainStr, searchStr) {
  let pos = mainStr.indexOf(searchStr);
  while (pos !== -1) {
    console.log(`Found at position ${pos}`);
    pos = mainStr.indexOf(searchStr, pos + 1);
  }
}
findAllOccurrences(s2, s3);
