```javascript
function factor(num, fctrs) {
  var flist = new Array(301);
  var dvsr, flix, newSize;

  fctrs.count = 0;
  if (fctrs.list !== null) free(fctrs.list);
  fctrs.list = null;
  for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
    if (num % dvsr != 0) continue;
    if (flix == 300) {
      newSize = fctrs.count + flix;
      if (newSize > flix) {
        fctrs.list = realloc(fctrs.list, newSize * sizeof(int));
      } else {
        fctrs.list = malloc(newSize * sizeof(int));
      }
      for (j = 0, i = fctrs.count; i < newSize; j++, i++) {
        fctrs.list[i] = flist[j];
      }
      fctrs.count = newSize;
      flix = 0;
    }
    flist[flix++] = dvsr;
    flist[flix++] = num / dvsr;
  }

  if (dvsr * dvsr == num) {
    flist[flix++] = dvsr;
  }

  if (flix > 0) {
    newSize = fctrs.count + flix;
    if (newSize > flix) {
      fctrs.list = realloc(fctrs.list, newSize * sizeof(int));
    } else {
      fctrs.list = malloc(newSize * sizeof(int));
    }
    for (j = 0, i = fctrs.count; i < newSize; j++, i++) {
      fctrs.list[i] = flist[j];
    }
    fctrs.count = newSize;
  }

  return fctrs;
}

function main() {
  var nums2factor = [2059, 223092870, 3135, 45];
  var ftors = { list: null, count: 0 };
  var sep, i, j;

  for (i = 0; i < 4; i++) {
    factor(nums2factor[i], ftors);
    console.log(`factors of ${nums2factor[i]} are:`);
    sep = ' ';
    for (j = 0; j < ftors.count; j++) {
      console.log(`${sep} ${ftors.list[j]}`);
      sep = ',';
    }
  }
}

main();
```
