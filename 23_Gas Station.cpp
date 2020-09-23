class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0, tot_gas = 0, tot_cost = 0 , cur_fuel = 0 ;
        for(int i = 0;i < gas.size(); i++){
            tot_gas += gas[i], tot_cost += cost[i] ;
            cur_fuel += gas[i] - cost[i] ;
            if (cur_fuel < 0){
                ans = i + 1 ;
                cur_fuel = 0 ;
            }
        }
        return (tot_gas >= tot_cost ? ans : -1) ; // if total gas is less than our total cost then we can't
									             // travel in circular path.
    }
};
