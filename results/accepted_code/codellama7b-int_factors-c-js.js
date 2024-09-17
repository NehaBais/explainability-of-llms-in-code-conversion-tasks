function factor(num, fctrs) {
  const flist = [];
  let flix = 0;
  let dvsr;

  for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
    if (num % dvsr !== 0) continue;
    flist.push(dvsr);
    flist.push(num / dvsr);
    flix += 2;
  }

  if (dvsr * dvsr === num) {
    flist.push(dvsr);
    flix++;
  }

  fctrs = new Array();
  fctrs.list = flist;
  fctrs.count = flix;

  return fctrs;
}

const nums2factor = [2059, 223092870, 3135, 45];
let ftors = [];
let i, j;

for (i = 0; i < nums2factor.length; i++) {
  factor(nums2factor[i], ftors);
  console.log(`factors of ${nums2factor[i]} are: `);
  for (j = 0; j < ftors.list.length; j++) {
    console.log(`${ftors.list[j]}`);
  }
}
