/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> dimension=binaryMatrix.dimensions();
        int n=dimension[0];
        int m=dimension[1];
       
        int i=0,j=m-1,leftMostOne=-1;
        
        while(i<n && j>=0)
        {
            int result=binaryMatrix.get(i,j);
            if(result==0)
              i++;
            else{
                leftMostOne=j;
                j--;
             }
        } 
        return leftMostOne;
    }
};
