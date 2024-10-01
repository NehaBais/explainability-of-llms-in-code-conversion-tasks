#### Answer

```cpp
#include <iostream>
#include <sys/stat.h>
using namespace std;
int main(){
	struct stat s;
	stat("input.txt", &s);
	cout << s.st_size;
	return 0;
}
```
