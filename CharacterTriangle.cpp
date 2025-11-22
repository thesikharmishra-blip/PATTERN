class Solution {
public:
    void pattern14(int n) {
        char ch='A';
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<char(ch+j-1);
            }
            cout<<endl;
        }

    }
};
