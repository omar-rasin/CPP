#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    printf("Before:\n");

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    printf("\nAfter:\n");

    v.pop_back();

     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
