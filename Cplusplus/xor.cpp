//1: true, 0:false
/*
Truth Table:
u :| v : |u^v
-----------
1 :| 1 : | 0
1 :| 0 : | 1
0 :| 1 : | 1
0 :| 0 : | 0
*/
#include <iostream>
using namespace std;

int main(){
    if(false ^ true ^ true){
        cout << "Should not run" << endl;
    }
    return 0;
}