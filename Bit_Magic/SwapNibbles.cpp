class Solution{
public:
    int swapNibbles(unsigned char x){
        
        unsigned char first = x<<4;
        unsigned char second = x>>4;
        return second | first;
    }
};
