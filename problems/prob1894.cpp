class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
       int i=0;
       long int big_sum = 0;
        for(int i=0;i<chalk.size();i++){
            big_sum+=chalk[i];
        }
        k %= big_sum;
        
       while(k>0){
        k=k-chalk[i];
        if(k<0){return i;}
        i++;
        if(i==chalk.size()){i=0;}
       }
       return i;
    }
}
// Credit to @sourav_n06 to use k%=big_sum; in one line versus a loop to save alot of time
