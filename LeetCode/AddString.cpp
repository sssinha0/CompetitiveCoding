class Solution {
public:
    string addStrings(string num1, string num2) {
        int borrow=0;
        int n1=num1.size();
        int n2=num2.size();
        string s;
        int i;
        for(i=0;i<min(n1,n2);i++){
            int a=num1[n1-i-1]-'0';
            int b=num2[n2-i-1]-'0';
             s=s+to_string((a+b+borrow)%10);
            borrow=(a+b+borrow)/10;
        }
        if(i<n1){
            while(i<n1){
            int a=num1[n1-i-1]-'0';
            s=s+to_string((a+borrow)%10);
            borrow=(a+borrow)/10;
           
                i++;
            }
            if(borrow!=0)
                    s+='1';
            borrow=0;
        }
        if(i<n2){
           while(i<n2){
                int b=num2[n2-i-1]-'0';
                  s=s+to_string((b+borrow)%10);
            borrow=(b+borrow)/10;
         
                i++;
            }
            if(borrow!=0)
                    s+='1';
            borrow=0;
        }
        if(borrow!=0)
                s+='1';
        reverse(s.begin(),s.end());
    return s;
    }
};