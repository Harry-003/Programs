
#include <iostream>
using namespace std;
int main(){
    char str[100];
    int i, count = 0;
    
    // Asking for input
    cout << "Enter a string: ";
    cin.get(str, 100);
    
    // Initializing the loop
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    
    // Displaying output
    cout << "Total no. of vowels: " << count << endl;
    
    return 0;
}
