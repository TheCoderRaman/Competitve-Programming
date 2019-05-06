#include <iostream>


using namespace std;


#define fori(n) for(int i = 0; i<n; i++)
int main(){
    
    //Optimizar cin >>
    ios::sync_with_stdio(false);

    int k,n;
    string s = "easy";
    int arr[101];

    cin >> n;
    //For, agrega a la lista y si es 1 devuelve hard
    fori(n){
        cin >> k;
        arr[i] = k;
        if(arr[i] == 1)s="hard";
    } 
    cout << s << endl;
    return 0;
}