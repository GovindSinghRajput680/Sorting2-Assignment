#include<iostream>
#include<vector>
using namespace std;
int main(){int n;
cout<<"Enter number of elemments in string : ";
cin>>n;
vector<string> v(n);
cout<<"Enter strings : ";
for(int i =0;i<n;i++){
    cin>>v[i];
}
for(int i =0;i<n-1;i++){bool check = false;
    for(int j =0;j<n-1-i;j++){
        if(v[j]>v[j+1]) swap(v[j],v[j+1]),check = true;
    }
    if(!check) break;
}
for(int i =0;i<n;i++){
    cout<<v[i]<<" ";
}

}