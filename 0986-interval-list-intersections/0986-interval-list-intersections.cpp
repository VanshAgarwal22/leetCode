class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>res;
        int A=0, B=0;
        int sizeA =firstList.size();
        int sizeB =secondList.size();
        vector<int>temp(2);
        
        while(A<sizeA && B<sizeB)
        {
            if(secondList[B][0]<=firstList[A][1] && secondList[B][1]>=firstList[A][0])
            {
                temp[0] =max(firstList[A][0] ,secondList[B][0]);
                temp[1] =min(firstList[A][1] ,secondList[B][1]);
                res.push_back(temp);

            }
            
            if(firstList[A][1]>secondList[B][1])
                B+=1;
            else
            {
                A+=1;
            }

        }
        return res;
        
        
    }
};