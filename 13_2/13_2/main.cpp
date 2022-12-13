#include <iostream>

#define z 2
#define max(x, z) ((x) > (x) ? (x) : (z))
#define print(a) printf("результат: %f", a)
#define pow(x) x * x

using namespace std;

int main()
{
    float x, y, result;
    
    cout << "введіть x: "; cin >> x;
    cout << "введіть y: "; cin >> y;
    
#if z > 3
    float tPow = pow(x - z);
    result = max(tPow, x - y);
    
#else
    result = max(x * y, y * z) + max(z * x, y * z);
    
#endif
    print(result);
}
