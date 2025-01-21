The error message indicates that implicitly declared classes are not enabled by default. This is a preview feature, so they need to be explicitly activated using a compiler flag (--enable-preview). 

To fix this, you can add the following at the top of your file: --enable-preview

Here's the corrected code with the necessary changes made:
```java
StringBuilder sb = new StringBuilder();
--enable-preview
sb.append("Hello");   // Append "Hello" at the end of the string builder
System.out.println(sb);  
// if you want to prepend a text value instead use, 
sb.insert(0,"anotherText");  // Insert "anotherText" at position 0 (start)
System.out.println(sb);
```
This will work as expected and print:
Hello
anotherText Hello

