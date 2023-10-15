#include "iostream"

using namespace std;

int main () {
    int num, option1;

do {
    cout << "Welcome Page" << endl;
    cout << "1. Print pattern" << endl;
    cout << "2. Rotate Array" << endl;
    cout << "3. Help" << endl;
    cout << "4. Exit" << endl;
    cout << "option:";

    cin >> num; 
    if (num == 1) {
        cout <<"Enter the number of rows for the pattern:"<<endl;
        cin >> option1;
        int y,x;
        cout<<"Output"<<endl;
        for ( x = option1;option1>0; option1--){
            for ( y = 0 ; y < option1; y++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (num==2){
        int numArray[100],k,n;
        cout<<"Enter the numberof elements (n):";
        cin>>n;
        cout<<"Enter the number of stops (k):";
        cin>>k;
        cout<<"Enter the array elements separated by spaces:";
        for(int s=0;s<n;s++){
            cin>>numArray[s];
        }
        cout<<"Output [";
        int y;
        for(y=n-k;y<n;y++){
            cout<<numArray[y]<<",";
        }
        for(int x=0; x<n-k-1;x++){
            cout<<numArray[x]<<",";
        }
        cout<<numArray[n-k-1]<<"]"<<endl;
    }
    else if (num==3){
        cout<<"--- Help ---"<<endl;
        cout <<"Option 1: Print a pattern with \'n\' rows of decreasing asterisks."<<endl;
        cout<<"Option 2:Rotate an array of 'n' elements to the right by 'k' stops"<<endl;
        cout<<"Option 3: Display this help message."<<endl;
        cout<<"Option 4: Exit the program"<<endl;
    }
    

}while(num!=4);
cout<<"EXiting the program. Goodbye!"<<endl;
return 0;

}