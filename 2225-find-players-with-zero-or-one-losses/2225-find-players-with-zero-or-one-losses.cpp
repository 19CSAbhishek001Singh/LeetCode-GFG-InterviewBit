class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // store all players that could be winners without lost games
         set<int> all_players; 
       // store players that lost and how many times
        map<int, int> players_that_lost; 
        
        for (auto el: matches) {
             // played and won
            all_players.insert(el[0]);
             // lost this game
            players_that_lost[el[1]]++;
        }
        
        vector<int> winners;
        for (auto el: all_players) {
            // check all players from winners that they don't have any lost games
            // and they are not in our map with losers
            if (players_that_lost.find(el) == players_that_lost.end()) {
                winners.push_back(el);
            } 
        }
        
        vector<int> losers;
        for (auto el: players_that_lost) {
            if (el.second == 1) {
                // we need players with just one lost game
                losers.push_back(el.first);
            }
        }
        
        return {winners, losers};
    }
};