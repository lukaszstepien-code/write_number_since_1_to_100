#include <iostream>


int main()
{
    using namespace std;
    int z_number{0};
    do
    {
        cout << "Write number since 1 to 100\n";
        cin >> z_number;
    } while(z_number > 100 || z_number < 1);
    
    cout << "Write number is " << z_number;
}
