#include<bits/stdc++.h>
using namespace std;
int a[100005];
void quicksort(int l, int r){
    int i = l;
    int j =r;
    int mid = a[(l+r)/2];
    while(i <= j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){swap(a[i],a[j]);
        i++;
        j--;
        }
    }
    if(i < r) quicksort(i,r);
    if(j > l) quicksort(l,j);

}
int main(){
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    long long ans =0;
    for(int i =0 ;i<n;++i){
        cin>>a[i];
        ans = ans +a[i];
    }
    quicksort(0,n-1);
    int i =0;
    int j=n-1;
    while(i < j){
        ans = ans + max(a[j]-a[i],0);
        i++;
        j--;
    }
    cout<<ans;
    return 0;
}