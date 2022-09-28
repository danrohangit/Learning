#include <iostream>;

using namespace std;

int test(int theNum){
    cout << theNum;
    cout << "  - The number \n";
    if (theNum > 0){
        cout << theNum;
        cout << "  - The number in if statement \n";
        //return theNum + test(theNum - 1);
        return theNum; // Basically recursion occurs here when + test(theNum - 1) is added
            // Basically test(10) -> + test(10-1) -> test(9) -> + test(9-1) -> etc
    }
    else{
     return 0;   
    }
}

int main(){
    int result = test(10); // Base Function call
    cout << result;
    return 0;
}
