class Solution {
public:
    bool isHappy(int n) {
       vector<int> nums(1001 , 0 ) ; 
        

        while( n != 1 && nums[n] != 1 ) { 
            nums[n] = 1  ; 
            int temp = n ; 
            n=0 ; 
            while( temp != 0 ) {
              int p = temp %10 ; 
              n+= (p*p) ; 
              temp /= 10  ; 

            }

            // cout<< n << " " ; 

            
             
        }
        return (n==1) ;  
    }
};
