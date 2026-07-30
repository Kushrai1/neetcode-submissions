class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     
        if ( n == 0 ) return true ; 
        
        flowerbed.push_back(0) ; 
        flowerbed.insert(flowerbed.begin(),0); 

        int sz = flowerbed.size() ; 
        int sum =flowerbed[1]; 
        
        for( int i = 0 ; i<sz-2 ; i++){
            sum += flowerbed[i+2]; 
           
           
            if(sum == 0 ) {
                sum += 1 ; 
                n--; 
                flowerbed[i+1] = 1 ; 
            }

            if(n== 0 ) break; 
           
           
            sum -= flowerbed[i] ; 
        }
      
        return (n==0) ; 

    }
}; 