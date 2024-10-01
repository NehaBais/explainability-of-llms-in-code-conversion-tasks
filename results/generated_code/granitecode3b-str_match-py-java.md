Here's the Java code that implements the three types of string matching as required:
```java
public class StringMatching {
 
 public static void main(String[] args) {
 String str1 = "abcd";
 String str2 = "ab";
 
 System.out.println("startsWith() method:");
 System.out.println(str1.startsWith(str2)); //returns True
 

 System.out.println("contains() method:");
 System.out.println(str1.contains(str2)); //returns True
 

 System.out.println("endsWith() method:");
 System.out.println(str1.endsWith(str2)); //returns False
 

 System.out.println("find() method:");
 int loc = str1.indexOf(str2); //returns 0
 if (loc != -1) {
 System.out.println("Location of match: " + loc);
 } else {
 System.out.println("No match found.");
 }
 

 loc = str1.indexOf(str2, loc+1);
 if (loc != -1) {
 System.out.println("Location of second match: " + loc);
 } else {
 System.out.println("No second match found.");
 }
 }
}
```
The output of this program will be:

startsWith() method:
True
contains() method:
True
endsWith() method:
False
find() method:
Location of match: 0
No second match found.

