static bool compare(pair<int,int> &Pair1,pair<int,int>&Pair2){
    return Pair2.second < Pair1.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size(); 
        unordered_map<int,int> numsMap;

        for (int i=0;i<n;i++){
            numsMap[nums[i]]++;
        } 

        vector<pair<int,int>> vNums;

        for(auto x : numsMap){
            vNums.push_back(x);
        }

        sort(vNums.begin(),vNums.end(),compare);
        for(auto x : vNums){cout << x.first << "  " << x.second << endl;}
        vector<int> ans;
        int c = 0;
        for(auto x : vNums){
            if(c==k) break;
            c++;
            ans.push_back(x.first);
        }

        return ans;
    }
