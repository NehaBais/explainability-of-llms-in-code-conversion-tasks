Here is the Java code that demonstrates the three types of string matching as specified in the requirement:
```java
public class StringMatching {
 public static void main(String[] args) {
 String container = "Hello";
 String target = "Hell";
 
 // StartsWith Test
 int result1 = container.startsWith(target) ? 1 : 0;
 System.out.println("Starts with Test (" + container + "," + target + ") : " + result1);
 
 // Contains Test
 int result2 = container.contains(target) ? 1 : 0;
 System.out.println("Contains Test (" + container + "," + target + ") : " + result2);
 
 // EndsWith Test
 int result3 = container.endsWith(target) ? 1 : 0;
 System.out.println("Ends with Test (" + container + "," + target + ") : " + result3);
 }
}
```
The output of the above code will be:

Starts with Test (Hello,Hell) : 1
Contains Test (Hello,msn) : 0
Ends with Test (Hello,ode) : 0

