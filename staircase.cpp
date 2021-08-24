#include <iostream>

using namespace std;

string getRow(int index, int n);

int main(){
    string result = "";
    int n = 0;
    cin>>n;

    for(int i = 0; i < n; i++){
        string value = getRow((i + 1), n);
        result += value + "\n";
    }

    cout<<result;

    return 0; 
}

string getRow(int index, int n){
    string result = "";
    int diff = n - index;

    if(diff > 0){
        for (int i = 0; i < diff; i++) {
            result += " ";
        } 
    }

    for(int i = 0; i < index; i++){
        result += "#";
    }

    return result;
}