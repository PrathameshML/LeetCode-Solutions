//tc=n
//sc=n
class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int>sufix(customers.size());
        if(customers[customers.size()-1]=='Y'){
            sufix[customers.size()-1]=1;
        }
        else sufix[customers.size()-1]=0;
        for(int i=customers.size()-2; i>=0; i--){
             if(customers[i]=='Y'){
                  sufix[i]=sufix[i+1]+1;
             }
             else sufix[i]=sufix[i+1];
        } 
        int noz=0;
         vector<int>penalty(customers.size()+1);
        for(int i=0; i<customers.size(); i++){
            penalty[i]=noz+sufix[i];
            if(customers[i]=='N') noz++;
        }
        penalty[customers.size()]=noz;
        int hour=0;
        
        for(int i=0; i<penalty.size()-1; i++){
            if(penalty[i]<penalty[hour]) hour=i;
        }
        if(noz<penalty[hour]) hour=customers.size();
        return hour;
    }
};
