#include <iostream>


using namespace std;

int main()
{
    int array_len;
    cout << "How many elements do you want to store: ";
    cin >> array_len;

    int arr[array_len];
    int last_ind = array_len - 1;
    int sum = 0;
    int largest = 0;
    int smallest = 0;

    for(int i=0; i < array_len; i++)
        {
            int number;
            cout << i << ") Enter a number: ";
            cin >> number;

            arr[i] = number;
            sum += number;
        }
        cout << "-----------------------"<<endl;

        cout <<"List of Numbers"<<endl;
        cout << "[ ";
    for(int i=0; i < array_len; i++)
        {
        cout << arr[i]<< ",";
        }
        cout << " ]"<<endl;

        cout << "-----------------------"<<endl;
        cout << ""<<endl;
        cout << "Sum: "<<sum << endl;

        cout << "-----------------------"<<endl;
        cout << ""<<endl;

        largest = arr[0];
        smallest = arr[0];
    for(int i=1; i < array_len; i++ )
        {

            if(largest < arr[i]){
                largest = arr[i];
            }
            else{
                largest = largest;
            }
        }
    for(int i=1; i < array_len; i++ )
        {

            if(smallest < arr[i]){
                smallest = smallest;
            }
            else{
                smallest = arr[i];
            }
        }

        cout<< "Largest: "<< largest << endl;
        cout << "Smallest: "<<smallest<<endl;

        cout << "-----------------------"<<endl;
        cout << ""<<endl;
        cout << "Reverse Order" << endl;
        cout << "[ ";
    for(int i = last_ind; i >= 0; i--){
         cout << arr[i]<<",";
    }
    cout << " ]"<<endl;

    cout << "-----------------------"<<endl;
    cout << ""<<endl;

    int number;
    int counter = 0;
    cout << "Enter the number: ";
    cin >> number;

    for(int i = 0; i < array_len; i++){
        if(arr[i]==number){
            counter += 1;
        }
        else{
            counter = counter;
        }

    }
    cout << number << " : " << counter<<endl;

    cout << "-----------------------"<<endl;




    return 0;
}
