This repo consist of a kind of a summary of all basic concept that involve in Bit Manipulation 

1)	Swapping Two Numbers : Num1=(Num1^Num2);
                                                      Num2=(Num1^Num2);
                                                      Num1=(Num1^Num2);

2)	Check If i’th bit is set or not:  if((Num&(1<<i))!=0){ cout<<”SET”;} else{ cout<<”NOT SET”;}

3)	Set The i’th bit : Num=(Num|(1<<i));

4)	Clear the i’th bit : Num=(Num&(~(1<<i)));

5)	Toggle the i’th bit : Num=(Num^(1<<i));

6)	Remove the last set bit (RightMost) : Num=(Num&(Num-1));

7)	Check power of 2: if((Num&(Num-1))==0){ cout<<”Power of 2”;} else{ cout<<”Not a power of 2”;}

8)	Check Number is odd or even : if((Num&1)==1){cout<<”odd”;} else {cout<<”even”;}

9)	Divide a number by 2 : Num=(Num>>1);

10)	Count number of set bits (C++ user) :  int ans= __builtin_popcount(Num);

11)	Count number of set bits (Other language) :  int count=0; while(Num!=0){Num=(Num&(Num-1)); count++} return count;
 Some Important question
 nums = [1, 2, 1, 3, 5, 2],  every no appear twice except two no ,return that  two number
Approch
* xor all the element
* find the rightmost set bit (xorall & -xorall)=>this bit help u to segregate the total element of array into two part ,one that all element has the same bit as a set and other have not the same bit
* num1=num1^num   iff (num1 & rightmost bit ans)
* num2=num2^num
