class Solution {
public:
    int longestMountain(vector<int>& a) {
            int n = a.size();
	int largest = 0;
	for(int i=1;i<=n-2;){
		if(a[i]>a[i-1] and a[i]>a[i+1]){
			int cnt = 1;
			int j = i;
			while(j>=1 and a[j]>a[j-1]){
				j--;
				cnt++;
			}
			while(i<=n-2 and a[i]>a[i+1]){
				i++;
				cnt++;
			}
			largest = max(largest,cnt);
		}
		else{
			i++;
		}
	}
	return largest;
    }
};