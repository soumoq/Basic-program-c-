#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create an empty vector
    vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

	cout<<"Elements of vector: "<<endl;
    for (int x : vect)
        cout << x << endl;

    cout<<"size of vector: ";
    cout<<vect.size()<<endl;

    vect.pop_back();
    vect.pop_back();

    cout<<"After pop elements of vector: "<<endl;
    for (int x : vect)
        cout << x << endl;

    return 0;
}
