#include <iostream>

using namespace std;

int Fibonacci(int totalNumbers);
int main()
{
    cout << "What term would you like to find?" << endl;
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}

int Fibonacci(int totalNumbers)
{
    if(totalNumbers == 1|| totalNumbers == 2){
        return 1;
    }
    else  {
        return Fibonacci(totalNumbers-1) + Fibonacci(totalNumbers-2);
    }
}
