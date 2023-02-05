PRIORITY_QUEUE PROBLEM.
Question
You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

Choose the pile with the maximum number of gifts.
If there is more than one pile with the maximum number of gifts, choose any.
Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
Return the number of gifts remaining after k seconds.

 

Example 1:

Input: gifts = [25,64,9,4,100], k = 4
Output: 29
Explanation: 
The gifts are taken in the following way:
- In the first second, the last pile is chosen and 10 gifts are left behind.
- Then the second pile is chosen and 8 gifts are left behind.
- After that the first pile is chosen and 5 gifts are left behind.
- Finally, the last pile is chosen again and 3 gifts are left behind.
The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.

ANS:
  
  long long pickGifts(vector<int>& a, int k) {
        long long i=0;
        priority_queue<int>p(a.begin(),a.end());
        while(k--){
            int r=p.top(); p.pop();
            int d=sqrt(r);
            p.push(d);
        
        }
        while(p.size()){
            i+=p.top();p.pop();
        }
        return i;
    }
