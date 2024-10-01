let str = "Good Morning";
let cstr = " to All";
let cstr2 = " !!!";

if (str.length + cstr.length + cstr2.length <= 24) {
  // failure when space allocated to str is insufficient.
  /* 1st method*/
  str += cstr;

  /*2nd method*/
  let x = str.length;
  str = str.substring(0, x) + cstr2;

  console.log(str);
}
