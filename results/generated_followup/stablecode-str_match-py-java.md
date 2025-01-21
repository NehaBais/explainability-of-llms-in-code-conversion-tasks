The error is due to missing semicolons at the end of lines that define statements. 

To fix it, we just need to add semicolons after each statement.

Here's the corrected Java code:

```java
public class Main 
{

    public static void main(String[] args) 
    {
        String str1 = "abcd";
        String str2 = "ab";
        System.out.println(str1.startsWith(str2))); // returns True
        str2 = "zn";
        System.out.println(str1.endsWith(str2)))); // returns False
        if("bb".equals(str1.substring(str1.indexOf(str2), str1.length())))) 
        {
            System.out.println("String found at index: " + str1.indexOf(str2))); 
        }
        if ("ab".equals(str1.substring(str1.lastIndexOf(str2) 
+ 1, str1.length())))) 
        {
            int loc = str1.lastIndexOf(str2);
            System.out.println("String found at index: " + loc)); 
        }
    }

}
```

This code performs the same operations as your Python code. It checks if a string starts with another, if it ends with another, and if it contains the second string at any location. It also handles multiple occurrences of a string for part 
