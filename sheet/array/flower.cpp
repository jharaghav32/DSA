#include <bits/stdc++.h>
using namespace std;

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int nop[20003]={0};
        int k = flowerbed.size();
        for(int i=0;i<n;i++){
            if(flowerbed[i]==1){
                if(i==0){
                        nop[i+1]=1;
                }
                else if(i==k-1){
                        nop[i-1]=1;
                }
                else
                {
                    nop[i+1]=1;
                    nop[i-1]=1;
                }
                nop[i]=1;
            }
        }
        int count=0;
        for(int i=0;i<k;i++){
            if(nop[i]==0)
                count++;
        }
        cout<<count<<endl;
        if(count>=n)
            return true;
        else
            return false;
        
    }
int main(){
    vector<int> v={1,0,0,0,1};

    if(canPlaceFlowers(v,2))
    cout<<true;
    else
    cout<<false;




    return 0;
}