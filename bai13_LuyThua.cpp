// bai13_LuyThua
//

#include <iostream>
using namespace std;
int main()
{
    cout << "TINH LUY THUA" << endl;
    int so, mu, luythua = 1;
    cout << "nhap so:"; cin >> so;
    cout << "nhap mu:"; cin >> mu;
    for (int i = 0; i < mu; i++)
    {
        luythua *= so;
    }
    cout << so << " ^ " << mu << " = " << luythua;
    return 0;

}

