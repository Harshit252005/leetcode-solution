class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int time = 0;

        queue<int> line;

        for(int i = 0; i<tickets.size(); i++){
            line.push(i);
        }

        while(!line.empty()){
            int current = line.front();
            line.pop();

            tickets[current] = tickets[current] -1 ;
            time++;


            if(tickets[current]>0){
                line.push(current);
            }else if (current == k){
                return time;
            }
        }

        return 0;
    }
        
        
    
};