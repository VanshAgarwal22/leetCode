class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)return -1;
        if(money==children*8)return children;
        if(money>children*8)return children-1;
        
        //money<children*8 , some will get the 8 somenot or less. special check for 4 
        money-=children; //get 1 to each
        //check kon kon 8 bana sakta h
        int count = money/7; // kitno ka 8 complete ho gya 
        int remain= money%7; //remain money
        //donot get 8
        children-=count;
        if((remain==3)&& (children==1) ) //4 vala  kase arise so distribute
        {
            count-=1;  //because another children get more than 8 this time

        }
        
        return count;
        
    }
};