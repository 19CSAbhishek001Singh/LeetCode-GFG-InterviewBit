class FoodRatings {
public:
    unordered_map<string,pair<string,int>>mp;
    unordered_map<string,set<pair<int,string>>>mmp;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++)
        {
            mp[foods[i]]={cuisines[i],ratings[i]};
            mmp[cuisines[i]].insert({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuis=mp[food].first;
        int rate=mp[food].second;
        mmp[cuis].erase({rate,food});
        mmp[cuis].insert({newRating,food});
        mp[food]={cuis,newRating};
    }
    
    string highestRated(string cuisine) {
        int highestrating=(*mmp[cuisine].rbegin()).first;
        auto it=mmp[cuisine].lower_bound({highestrating,""});
        return (*it).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */