Here is the equivalent Java code for your Golang code:
```java
import java.util.*;

public class Main{
   public static void main(String[] args){
      match("abracadabra", "abr");
   }

   static void match(String first, String Second) {
      System.out.println("1. " + First + " starts with " + Second + ": " + First.startsWith(Second));
      int i = First.indexOf(Second);
      System.out.println("2. " + First + " contains " + Second + ": " + (i >= 0) + ", ");

      if (i >= 0){
         System.out.println("2.1. At location " + i);
         for(int start = i+1;;start += i+1){
            if ((i=First.indexOf(Second, start)) < 0) break;
            System.out.println("2.2. At location " + (start+i));
         }
         System.out.println("2.2. And that's all");
      }

      System.out.println("3. " + First + " ends with " + Second + ": " + First.endsWith(Second));
   }
}
```
This code will output the same result as your Golang program. Note that in Java, String objects have a number of built-in methods for string matching, so we don't need to use the strings package from Go in this case.
