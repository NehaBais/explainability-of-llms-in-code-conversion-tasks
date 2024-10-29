Here is the Java equivalent of your C++ code. Note that in java, StringBuilder class can be used for string concatenation instead of using STL accumulate function which is not available in java. Also, there are no vectors in Java, but ArrayLists have similar functionality. Here is the Java version:

```java
import java.util.*;

public class Main {
    public static void main(String[] args)  {
        ArrayList<String> myStrings = new ArrayList<>(Arrays.asList("prepended to", "my string"));  
        
        StringBuilder prepended = new StringBuilder();
        for (String str : myStrings) {
            prepended.insert(0, str);  // This line is equivalent to your C++ std::accumulate function
        }
      
        System.out.println(prepended.toString());
   <｜begin▁of▁sentence｜>		}
```

