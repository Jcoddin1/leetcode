class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hills = 0;
        int t1 = nums[0];
        int t2 = nums[1];
        bool up = false;
        bool down = false;

        if(t1>t2){ down=true; }
        if(t1<t2){ up=true;   }

        for(int i=2;i<nums.size();i++){
            t1=nums[i-1];
            t2=nums[i];
            // same num
            if(t1==t2){ continue; }
            // set initial slope in loop
            else if(!up && !down){
                if(t1>t2){ down=true;}
                if(t1<t2){ up=true;}

            }
            else if(up && t1>t2){
                hills++;
                up = false;
                down = true;
            }
            else if(down && t1<t2){
                hills++;
                up = true;
                down = false;
            }
            else{continue;}
        }
        return hills;
    }
};








