#include <iostream>
#include <cmath>
using namespace std;

int main()
{   // черный ладья черный d5
    cout << "What chess piece?" << endl;
    char a = '0';
    cin >> a;
    pair<char, int> posA;
    do 
    { 
        cout << "Initial coordinate?" << endl; 
        cin >> posA.first >> posA.second >> endl;
    }
     while (!(((posA.first == "a")||(posA.first == "b")||(posA.first == "c")||
          (posA.first == "d")||(posA.first == "e")||(posA.first == "f")||
          (posA.first == "g")||(posA.first == "h")) && (posA.second > 0) &&
          (posA.second <=8)))
    pair<char, int> coordB;
    do 
    {   cout << "Next coordinate?" << endl;
        cin >> coordB.first >> coordB.second >> endl;
    } 
    while (!(((coordB.first == "a")||(coordB.first == "b")||(coordB.first == "c")||
          (coordB.first == "d")||(coordB.first == "e")||(coordB.first == "f")||
          (coordB.first == "g")||(coordB.first == "h")) && (coordB.second > 0) &&
          (coordB.second <=8)))
    
    if ((posA.first == coordB.first)||(posA.second == coordB.second)) 
    {
        if  (((posA.first-coordB.first)<(posA.first-'d'))||
            ((posA.second-coordB.second)<(posA.second-5))) 
        {
            cout << "true" << endl;
        }
        else cout << "error" << endl;
    }
    else cout << "error" << endl;
    
    return 0;
} 
