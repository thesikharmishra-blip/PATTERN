class Solution {
private:
  void pattern1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";

            }
          for(int j=1;j<=2*i-1;j++){
            cout<<"*";
            
          }
          cout<<endl;
        }

    }
  void pattern2(int n) {
        for(int i =1;i<=n;i++){
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            for(int j=1;j<=2*n-2*i+1 ;j++){
                cout<<"*";
            } 
            cout<<endl;

        }


    }
 public:

 void pattern3(int n) {
    pattern7(n);
    pattern8(n);}
 };
