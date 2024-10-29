Below is the equivalent Java code for your Rust program. As per java's String class, it does not support UTF-16 and we are assuming a default encoding of UTF-8 as that supports all valid Unicode characters. However, if you have to use specific encoding, you will need a library like Apache Commons Text which provides more control over character sets:

```java
String s = "abc文字化けdef";
int n = 2;
int m = 3;

// Print 3 characters starting at index 2 (c文字)
System.out.println(s.substring(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
System.out<｜begin▁of▁sentence｜>(s.substring(n));

// Print all characters except the last (abc文字化けde)
if(s.length() > 0) { // if string is not empty
    System.out.println(s.substring(0, s.length() - 1));
}

// Find 'b' and print from there 3 characters onwards (bc文)
int cpos = s.indexOf('b');
if(cpos != -1 && m + cpos <= s.length()) { // if b is found and length after cutoff is valid
    System.out.println(s.substring(cpos, cpos + m));
}

// Find "けd" and print from there 3 characters onwards (けde)
int spos = s.indexOf("けd");
if(spos != -1 && m + spos <= s.length()) { // if "けd" is found and length after cutoff is valid
    System.out.println(s.substring(spos, spos + m));
}
```

