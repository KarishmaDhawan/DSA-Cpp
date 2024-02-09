#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h){
    int i,j;
    i=l-1;
    for(j=l;j<h;j++){
        if(a[j]<a[h]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quick_sort(int a[],int l,int h){
    if(l<h){
        int loc=partition(a,l,h);
        quick_sort(a,l,loc-1);
        quick_sort(a,loc+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}