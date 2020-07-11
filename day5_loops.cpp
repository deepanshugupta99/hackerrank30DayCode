#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,result;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;i<=10;i++)
    {
        result=n*i;
        cout<<n<<" x "<<i<<" = "<<result<<"\n";
    }
    return 0;
}
