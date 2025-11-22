class Solution {
public:
    void pattern17(int n) {
        for(int i=1;i<=n;i++){
            char ch='A';
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<char(ch);
                ch++;
            }
            for(int j=1;j<=i-1;j++){
                cout<<char(ch-2);
                ch--;
            }
            cout<<endl;
        }

    }
};
