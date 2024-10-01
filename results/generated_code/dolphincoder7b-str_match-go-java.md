This is a rough conversion of the given Golang code to Java. Below is the equivalent Java code:
```java
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String first = "abracadabra";
        String second = "abr";
        
        System.out.printf("1. %s starts with %s: %b\n",
                first, second, first.startsWith(second));
        
        int index = first.indexOf(second);
        System.out.printf("2. %s contains %s: %b,", 
                first, second, index >= 0);
        
        if (index >= 0) {
            System.out.print(" at location " + index + ",");
            for (int i = index + 1; ; ) {
                index = first.indexOf(second, i);
                
                if (index < 0)
                    break;
                System.out.println(" at location " + (i + index));
                i += index + 1;
            }
            System.out.println(" and that's all");
        }
        
        System.out.printf("3. %s ends with %s: %b\n", 
                first, second, first.endsWith(second));
    }
}
```
This conversion doesn't handle the optional requirements as there is no direct equivalent in Java. However, I'll leave it up to you to implement these functionalities or any other improvements based on your specific requirements.
