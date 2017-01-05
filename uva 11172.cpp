#include <iostream>
using namespace std;
int main()
{
    int tcase, a, b;
    cin >> tcase;
    while(tcase--){
        cin >> a >> b;
        if(a > b)
            cout << ">" << endl;
        else if( a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
