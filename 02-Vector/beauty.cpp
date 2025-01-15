#include<bits/stdc++.h>
using namespace std;
 vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& qe) {
        vector<int>ans(qe.size(),0);
        sort(items.begin(),items.end());
        vector<pair<int,int>>rac;
        for(int i=0;i<qe.size();i++){
            rac.push_back({qe[i],i});
        }
        int i=0,maxb=0;
        sort(rac.begin(),rac.end());
        for(auto& [val,ind]:rac){
            while(i<items.size() && val>=items[i][0]){
                maxb=max(maxb,items[i][1]);
                i++;
            }
            ans[ind]=maxb;

        }
        return ans;
    }
    int main(){
        vector<vector<int>> items = {{1,2},{3,2},{2,4},{5,6},{3,5}};
        vector<int> queries={1,2,3,4,5,6};
        vector<int> result = maximumBeauty(items, queries);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }cout<<endl;
        }