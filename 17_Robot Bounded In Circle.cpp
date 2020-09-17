class Solution {
public:
    bool isRobotBounded(string instructions) {
        char direction='N';
        unordered_map<char,char> left;
        left['N']='W';
        left['W']='S';
        left['S']='E';
        left['E']='N';
        
        unordered_map<char,char> right;
        right['W']='N';
        right['N']='E';
        right['E']='S';
        right['S']='W';
        
     //    W  
     // S      N
     //    E
        
        int x=0,y=0;
        unordered_map<int,pair<int,int>>move;
        move['N']={0,1};
        move['W']={-1,0};
        move['S']={0,-1};
        move['E']={1,0};
        
        for(char i:instructions){
            if(i=='L'){
                direction=left[direction];
            }
            else if(i=='R'){
                direction=right[direction];
            }
            else{
                x+=move[direction].first;
                y+=move[direction].second;
            }
        }
        if(x==0 && y==0){
            return true;
        }
        if(direction!='N'){
            return true;
        }
        return false;
    }
};
