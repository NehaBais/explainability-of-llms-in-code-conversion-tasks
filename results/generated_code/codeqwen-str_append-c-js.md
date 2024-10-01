Here is the JavaScript version of your C code:

```javascript
let str = "Good Morning";
let cstr = " to All";
let cstr2 = " !!!";

if(str.length + cstr.length + cstr2.length <= 24) { // failure when space allocated to str is insufficient.
    /* 1st method*/
    str += cstr;

    /*2nd method*/
    let x = str.length;
    str = str.substring(0,x) + cstr2;

    console.log(str);
}
```

This JavaScript code does the same as your C code, but in a more idiomatic way. The `+=` operator is used to concatenate strings in JavaScript. Also, instead of using `sizeof`, JavaScript has a built-in method called `length` which provides the length of a string. Strings in JavaScript can also be sliced with the substring() method.
