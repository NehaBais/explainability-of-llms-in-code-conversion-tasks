This is a Java equivalent of the given C code. 

```java
import java.util.*;
class Main { 
    public static void main(String[] args) { 
        String str = "Good Morning";
        String cstr = " to all";
        String cstr2 = " !!!"; 

        //failure when space allocated to str is insufficient.

        if(str.length() + cstr.length() + cstr2.length() < 24) { 
            /*1st method*/
            str += cstr;

            /*2nd method*/
            int x=str.length();
            str = String.format("%s%s", str, cstr2); 
            System.out.println(str);
        }
    }
}
``` 

Please note that in Java the string concatenation operator is `+=` and it is not `strcat()`. Also in Java, if the size of a string exceeds the memory allocated for it (i.e., array) then you need to adjust the size dynamically using `StringBuilder`. 

The second method also doesn't have a direct equivalent in Java as `sprintf()` is non-existent there. A workaround is to convert the string into a character array and then perform the concatenation operation. However, in this case, it's not required because the strings are small enough to fit within the allocated space. 

You can run this code online at: [http://ideone.com/](http://ideone.com/)

This code will give you the output "Good Morning to all !!!". The `+` operator in Java has a higher precedence than `=` so it takes care of the appending operation before concatenation happens, resulting in "Good Morning to all" and then " !!!". 

Please note that there is no direct equivalent for `#include<stdio.h>` and `<string.h>`, you need to include these libraries separately in Java. Also, it's not allowed to declare an array with a size less than 12, we can adjust the length accordingly to 16. 

Let me know if there's anything else that needs clarification or you're facing any issues while running this code online at: [http://ideone.com/](http://ideone.com/)
