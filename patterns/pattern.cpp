#include <iostream>
#include <string>
using namespace std;

void pattern11(int n)
{
    int star;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            star = 1;
        else
            star = 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << star;
            star = 1 - star;
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
        space -= 2;
    }
}

void pattern15(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+(n-i-1); ch++) {
            cout << ch;
        }
        cout << "\n";
    }
}

void pattern20(int n) {
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++) {
        int star=i;
        if(i>n) star = 2*n-i;
        for(int j=1; j<=star; j++){
            cout << "*";
        }
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=1; j<= star; j++) {
            cout << "*";
        }
        cout<< "\n";
        if(i<n) space -=2;
        else space +=2;
    }
}

void pattern21(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || i==n-1 || j==0 || j==n-1) {
                cout << "*";
            }else cout << " ";
        }
        cout << "\n";
    }
}


void pattern22(int n) {
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout << (n- min(min(top, down), min(left, right)));
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}
