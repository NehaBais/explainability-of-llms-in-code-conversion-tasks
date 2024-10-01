Here is the equivalent Java code for your C program:

```java
import java.util.ArrayList;
import java.util.List;

class Factors {
    public List<Integer> list = new ArrayList<>();
}

public class Main{

    static void factor(int num, Factors fctrs) {
        fctrs.list.clear();
        for (int dvsr = 1; dvsr * dvsr < num; ++dvsr){
            if (num % dvsr == 0){
                fctrs.list.add(dvsr);
                fctrs.list.add(num / dvsr);
            }
        }
        if (dvsr * dvsr == num) {
            fctrs.list.add(dvsr);
        }
    }

    public static void main(String []args){
        int[] nums2factor = { 2059, 223092870, 3135, 45 };
        Factors ftors = new Factors();
        for (int i=0; i<nums2factor.length; ++i){
            factor( nums2factor[i], ftors );
            System.out.println("factors of " + nums2factor[i] + " are: ");
            String sep = "";
            for (int j=0; j<ftors.list.size(); ++j){
                System.out.print(sep + ftors.list.get(j));
                sep = ", ";
            }
            System.out.println();
        }
    }
}
```
This Java code does the same thing as your C program. It finds all factors of an integer and prints them out one by one separated by commas in a new line for each number. Note that we use ArrayList to store the factor list instead of reallocating memory every time, which is more efficient.
