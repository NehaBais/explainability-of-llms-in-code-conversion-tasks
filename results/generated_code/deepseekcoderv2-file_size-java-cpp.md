#### Answer 10:
```
#include <fstream>
using namespace std;
int main() {
    // open input stream for reading (default mode)
    ifstream istrA("input.txt");
    cout << istrA.rdbuf()->in_avail();
    // open output stream for writing (default mode)
    ofstream ostrB("/file.txt");
    cout << ostrB.rdbuf()->out_avail() << endl;
}
```
