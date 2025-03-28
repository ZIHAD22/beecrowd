#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double x, result;

    cin >> x;

    result = 3.14159 * (x * x);

    cout << "A=" << fixed << setprecision(4) << result << endl;

    return 0;
}