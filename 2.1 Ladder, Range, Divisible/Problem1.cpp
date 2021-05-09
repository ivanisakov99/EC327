#include <iostream>

using namespace std;

int main(){
    int height = 0, width = 0;

    while(1){
        cout << "How tall is your ladder? ";
        cin >> height;

        cout << "How wide is your ladder? ";
        cin >> width;

        if(height == 0 || width == 0){
            cout << "The height/width can't be zero." << endl;
            continue;
        }
        else if(height < 0 || width < 0){
            cout << "Invalid input!" << endl;
            return -1;
        }

        for(int i = 0; i < height; i++){
            if(i % 2 == 0 || i == 0){
                for(int j = 0; j < width; j++){
                    (j == 0 || j == width - 1) ? cout << "#" : cout << " ";
                }
                cout << endl;
                
            }
            else{
                for(int j = 0; j < width; j++){
                    cout << "#";
                }
                cout << endl;
            }
        }

    }

    return 0;
}