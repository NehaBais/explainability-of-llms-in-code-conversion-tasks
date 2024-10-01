Sure, here's the Java code that accomplishes the same task:
```java
String s = "abc文字化けdef";
int n = 2;
int m = 3;

// Print 3 characters starting at index 2 (c文字)
System.out.println(s.chars().skip(n).limit(m).collect(Collectors.joining()));

// Print all characters starting at index 2 (cletters化けdef)
System.out.println(s.chars().skip(n).collect(Collectors.joining()));

// Print all characters except the last (abc文字化けde)
System.out.println(s.substring(0, s.length() - 1));

// Print 3 characters starting with 'b' (bc文)
int cpos = s.indexOf('b');
if (cpos != -1) {
 System.out.println(s.substring(cpos + m));
}

// Print 3 characters starting with "けd" (けde)
int spos = s.indexOf("けd");
if (spos != -1) {
 System.out.println(s.substring(spos + m));
}
```
Note that the Java code uses `substring()` instead of `skip()` and `take()` to extract a substring, because `substring()` takes a start index and an end index as arguments.

